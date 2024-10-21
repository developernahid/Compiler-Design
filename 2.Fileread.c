#include <stdio.h>
int main(){
FILE * data;
char str[1000];
data=fopen("file.txt","r");
//fputs("Hello, I'm here to disturb you again\n",data);
while (!feof(data))
{
    fscanf(data,"%s",str);
    printf("%s",str);
    
}

    return 0;
}