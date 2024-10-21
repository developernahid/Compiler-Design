#include <bits/stdc++.h>
using namespace std;

int main(){
//Read input from input.txt file
ifstream inputFile("nahid.txt");
ofstream outPut("newline.txt");
string str;
while (getline(inputFile,str))
{
    int len= size(str);
    for (int i = 0; i < len; i++)
    {
        if(isspace(str[i]))
        {
            outPut<<endl;
        }
        outPut<<str[i];
        
    }
    outPut<<endl;
}
inputFile.close();
outPut.close();
    return 0;
}