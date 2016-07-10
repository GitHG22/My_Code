#include<iostream>

using namespace std;

void main(){
    int n1;
    int n2;
    cout<<"Enter the numbers:";
    cout<<"\nN1=";
    cin>>n1;
    cout<<"N2=";
    cin>>n2;
    char op;
    cout<<"Which Operation? : ";
    cin>>op;

    switch(op)  {
    case '+': cout<<n1<<'+'<<n2<<'='<<n1+n2; break;
    case '-': cout<<n1<<'-'<<n2<<'='<<n1-n2; break;
    case '/': cout<<n1<<'/'<<n2<<'='<<n1/n2; break;
    case '*': cout<<n1<<'*'<<n2<<'='<<n1*n2; break;
    default : cout<<"Wat?";
    }


}
