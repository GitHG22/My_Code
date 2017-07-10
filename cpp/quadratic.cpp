#include<iostream>
#include<math.h>
#include<stdlib.h>
#include<ctime>
#include<fstream>


using std::cout;
using std::cin;
using std::endl;
using std::clock_t;
using std::fstream;
using std::ios;

void quadratic(){
  float a;
  float b;
  float c;
  float D;

  clock_t time_in1, time_in2;
  time_in1 = clock();

  fstream obj;
  obj.open("Wannacry.dat", ios::out | ios::app);

  cout<<"Enter the coefficients of the quadratic of the equation as a,b,c respectively so they form a quadratic like ax^2+bx+c \n";
  cout<<"a = ";cin>>a;
  cout<<"b = ";cin>>b;
  cout<<"c = ";cin>>c;
  time_in2 = clock();


  obj<<"\nAfter taking "<<(time_in2-time_in1)/(double)CLOCKS_PER_SEC<<" seconds, you entered the equation "<<a<<"x^2+"<<b<<"x+"<<c;


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
      obj<<"And got "<<(-b+sqrt(D))/2*a<<" and "<<(-b-sqrt(D))/2*a<<"as roots.\n";
    }
    else if(D<0){
      cout<<"LoL, you just entered an equation with unreal roots.\nAnyways, you want roots. I get you roots.";
      cout<<"The roots are "<<-b/(2*a)<<'+'<<sqrt(-D)/2.0*a<<"i and "<<-b/(2.0*a)<<'-'<<sqrt(-D)/2.0*a<<'i';

      obj<<"And got the unreal roots as "<<-b/(2*a)<<'+'<<sqrt(-D)/2.0*a<<"i and "<<-b/(2.0*a)<<'-'<<sqrt(-D)/2.0*a<<'i'<<endl;
    }
  }
  else {
    obj<<"\nAnd sucked\n";
    cout<<"Why? Just why?";
    exit(1);
  }
  obj.close();
}
