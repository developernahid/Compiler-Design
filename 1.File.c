#include <stdio.h>
int main(){
FILE * data;
//w mane write kora, a mane ager jinis thakbei reda kora+updtae kora
data=fopen("file.txt","a");
//fputs("Hello, I'm here to disturb you again\n",data);
fputs("I love programming\n",data);
    return 0;
}


int sum(int r){
    int area= 3.1416*r*r;
    return r;
}

int main(){
    int a,b;
    cin>>a;
    int c=sum(a);
    cout<<c<<endl;
}