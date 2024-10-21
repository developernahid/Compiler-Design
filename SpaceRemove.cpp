#include <bits/stdc++.h>
using namespace std;

int main(){
//Read input from input.txt file
ifstream inputFile("input.txt");
ofstream outPut("output.txt");
string str;
while (getline(inputFile,str))
{
    int len= size(str);
    for (int i = 0; i < len; i++)
    {
        if(!isspace(str[i]))
        {
            outPut<<str[i];
        }
        
    }
    outPut<<endl;
}
inputFile.close();
outPut.close();
    return 0;
}