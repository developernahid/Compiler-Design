#include <bits/stdc++.h>
using namespace std;
 int isKeyword(string s){
    return (s == "auto" || s == "int" || s == "char" || s == "long" ||
            s == "float" || s == "double" || s == "struct" || s == "if" ||
            s == "else" || s == "break" || s == "continue" || s == "while" ||
            s == "do" || s == "for" || s == "return" || s == "signed" ||
            s == "unsigned" || s == "default" || s == "goto" || s == "case" ||
            s == "sizeof" || s == "short" || s == "switch" || s == "void" ||
            s == "static" || s == "typedef");
 }
 int isVariable(string s) {
    if (isKeyword(s)) {
        return 0;
    }

    // Variable names cannot contain '@'
      for (int i = 1; i < s.length(); i++) {  // Use s.length() to get the correct length
        if (!isalnum(s[i]) && s[i]) {
            return 0;
        }
    }
    // if (s.find('@') != string::npos) {
    //     return 0;
    // }

    // Variable name must start with an alphabet or underscore
    if (!isalpha(s[0]) && s[0] != '_') {
        return 0;
    }

    // The rest of the string must be alphanumeric or underscore
    for (int i = 1; i < s.length(); i++) {  // Use s.length() to get the correct length
        if (!isalnum(s[i]) && s[i] != '_') {
            return 0;
        }
    }

    return 1; // It's a valid variable
}
int isOperator(string s){
    for (int i = 1; i < s.length(); i++) {  // Use s.length() to get the correct length
        if (s[i]=='+'||s[i]=='-'|| s[i]=='*'|| s[i]=='/'|| s[i]=='%') {
            return 1;
        }
}
return 0;
}
 int main(){
    string st;
    ifstream inputFile("keyword.txt");
    ofstream outputFile("variable_output.txt");

    while (inputFile>>st)
    {
        if (isKeyword(st))
        {
            cout<<st<<" is keyword";
            outputFile << st << " is a keyword" << endl;  // Write to outputFile
            cout<<"\n";
        }

        if (isVariable(st)){
            cout<<st<<" is variable";
            outputFile << st << " is a variable" << endl; 
            cout<<"\n";
         }
         if (isOperator(st))
         {
            cout<<st<<" is a operator";
            outputFile << st << " is a operator" << endl; 
            cout<<"\n";
         }
         
    }
    inputFile.close();
    outputFile.close();



    return 0;
 }

