#include <stdio.h>
#include <string.h>


int main() {
    char line[100];
    int is_comment = 0;

    printf("Enter a line: ");
    fgets(line, sizeof(line), stdin);


    line[strcspn(line, "\n")] = 0;


    if (line[0] == '/' && line[1] == '/') {
        is_comment = 1;
    }

    else if (line[0] == '/' && line[1] == '*') {

        int len = strlen(line);
        if (line[len - 2] == '*' && line[len - 1] == '/') {
            is_comment = 1;
        }
    }


    if (is_comment) {
        printf("It is a comment.\n");
    } else {
        printf("It is not a comment.\n");
    }
    return 0;
}

