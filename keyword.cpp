#include <iostream>
#include <string>
using namespace std;

int isKeyword(string s) {
    // Returning 1 if the string is a keyword, otherwise 0
    return (s == "auto" || s == "int" || s == "char" || s == "long" ||
            s == "float" || s == "double" || s == "struct" || s == "if" ||
            s == "else" || s == "break" || s == "continue" || s == "while" ||
            s == "do" || s == "for" || s == "return" || s == "signed" ||
            s == "unsigned" || s == "default" || s == "goto" || s == "case" ||
            s == "sizeof" || s == "short" || s == "switch" || s == "void" ||
            s == "static" || s == "typedef");
}

int main() {
    string st;
    freopen("keyword.txt", "r", stdin);

    cout << "Keywords are given below:\n\n";

    while (cin >> st) {
        // Check if the word is a keyword
        if (isKeyword(st)) {
            cout << st << " is a keyword\n";
        }
    }

    return 0;
}
