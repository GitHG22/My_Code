#include<iostream>
#include<math.h>

using namespace std;

void quadratic(){
  float a;
  float b;
  float c;
  float D;
  cout<<"Enter the coefficients of the quadratic of the equation as a,b,c respectively so they form a quadratic like ax^2+bx+c \n";
  cout<<"a = ";cin>>a;
  cout<<"b = ";cin>>b;
  cout<<"c = ";cin>>c;
  if(a!=0){
    D = b*b-4*a*c;
    cout<<"The equation you just entered is ";
    if (a==1){
      cout<<"x^2+"<<b<<"x+"<<c<<endl;
    }
    else if (b==1){
      cout<<a<<"x^2+"<<"x+"<<c<<endl;
    }
    else if(b==0){
      cout<<a<<"x^2+"<<c<<endl;
    }
    else if (c==0) {
      cout<<a<<"x^2+"<<b<<"x"<<endl;
    }
    else {
      cout<<a<<"x^2+"<<b<<"x+"<<c<<endl;
    }
    if(D>=0){
      cout<<"The roots are "<<(-b+sqrt(D))/2*a<<" and "<<(-b-sqrt(D))/2*a;
    }
    else if(D<0){
      cout<<"LoL, you just entered an equation with unreal roots.\nAnyways, you want roots. I get you roots.";
      cout<<"The roots are "<<-b/(2*a)<<'+'<<sqrt(-D)/2.0*a<<"i and "<<-b/(2.0*a)<<'-'<<sqrt(-D)/2.0*a<<'i';
    }
  }
  else {
    cout<<"Why? Just why?";
    exit(1);
  }
}
