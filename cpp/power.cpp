#include<iostream>


using namespace std;

void power(){
  //Get x^y
  unsigned int i;
  unsigned long int x;
  unsigned long int y;
  int p;
  p=1;
  cout<<"Enter the number whose power is to be found : ";
  cin>>x;
  cout<<"Enter to which power, except zero : ";
  cin>>y;
  if((x)&&(y)){
  for(i=1;i<=y;i++){
    p=p*x;
  }
  cout<<x<<'^'<<y<<'='<<p;
  }
  else {
    cout<<"RiP. Read Instructions.";
    exit(1);
  }
  //Could have alternatively been done with pow(x,y) and including math.h, but no. Because that's wayy too mainstream.
}
