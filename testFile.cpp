#include <iostream>
#include <fstream>
#include<cstdio>
using namespace std;
int main(){
    //Create a new file
    // ofstream Myfile("nahid.txt");
    //Write text to a file
    // Myfile<<"Hello!! Welcome to CPP";
    // Myfile.close();
string MyText;
//Read a file data
ifstream myFile("nahid.txt");
//print line by line
while (getline(myFile,MyText))
{
    cout<<MyText<<endl;
}
myFile.close();


    return 0;
}

