#include <bits/stdc++.h>
using namespace std;
float sum(int r){
    float area= 3.1416*r*r;
    return area;
}

int main(){
    int a;
    cin>>a;
    float c=sum(a);
    cout<<c<<endl;
}