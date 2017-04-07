#include<iostream>
#include<math.h>
#include<string.h>

using std::cout;
using std::cin;
using std::endl;


void d2h(unsigned long int a, char h[]){
  int n=a;
  for(int i=0; n!=0 ;i++){
    switch (n%16){
      case 10 : h[i]='A';break;
      case 11 : h[i]='B';break;
      case 12 : h[i]='C';break;
      case 13 : h[i]='D';break;
      case 14 : h[i]='E';break;
      case 15 : h[i]='F';break;
      default : h[i]=48+n%16;break;
    }
    n/=16;
  }
  int temp,l=strlen(h);
  for(int i=0;i<l/2;i++){
    temp=h[i];
    h[i]=h[l-i-1];
    h[l-i-1]=temp;
  }
}


void d2b(unsigned long int a, char b[]){
  int n=a;
  for(int i=0;n!=0 ;i++){
    b[i]=(char)48+n%2;
    n/=2;
  }

  //The number we got is reversed. Making it correct.

  int temp, l=strlen(b);
  for(int i=0; i<l/2;i++){
    temp=b[i];
    b[i]=b[l-i-1];
    b[l-i-1]=temp;
  }
}

/*
One way to do it. Has a lot less range. Doesn't make sense when we can do with char.
int main(){
  unsigned long int whatever=0;
  int a;
  cin>>a;
  int n=a;
  for(int i=0; n!=0 ;i++){
    whatever+=(int)pow(10,i)*(n%2);
    n/=2;
  }
  cout<<whatever;
  cin>>a;
}
*/
