#include <bits/stdc++.h>
using namespace std;

int main(){
//Read input from input.txt file
ifstream inputFile("nahid.txt");
string str;
while (getline(inputFile,str))
{
  
       inputFile>>str;
        
       cout<<str;
        
    cout<<endl;
}
inputFile.close();

    return 0;
}