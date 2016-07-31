#include<iostream>
#include<windows.h>

using namespace std;

void greatest(){
  int n;
  cout<<"How many numbers you want to be compared? ";
  cin>>n;
  cout<<'\n';
  if (n>1&&n<5){
    int a;
    int b;
    if(n==2){
      cout<<"Enter the first number ";
      cin>>a;
      cout<<"Enter the second number ";
      cin>>b;
      if(a==b){
        cout<<"The numbers are equal :/";
      }
      else {
      if(a>b) {
        cout<<a<<" is greatest";
      }
      else  {
        cout<<b<<" is greatest";
      }
    }
    }
    else if(n==3){
      int c;
      cout<<"Enter the first number ";
      cin>>a;
      cout<<"Enter the second number ";
      cin>>b;
      cout<<"Enter the third number ";
      cin>>c;
      if(a==b&&b==c){
        cout<<"The numbers are equal :/";
      }
      else{
      if(a>=b) {
        if(a>=c){
          cout<<a<<" is greatest";
        }
        else {
          cout<<c<<" is greatest";
        }
      }
      else {
        if(b>=c){
          cout<<b<<" is greatest";
        }
        else{
          cout<<c<<" is greatest";
        }
      }
    }
    }
    else {
      int c;
      int d;
      cout<<"Enter the first number ";
      cin>>a;
      cout<<"Enter the second number ";
      cin>>b;
      cout<<"Enter the third number ";
      cin>>c;
      cout<<"Enter the fourth number ";
      cin>>d;
      if(a==b&&b==c&&b==d){
        cout<<"The numbers are equal :/";
      }
      else{
      if(a>=b){
        if(a>=c){
          if(a>=d){
            cout<<a<<" is greatest";
          }
          else {
            cout<<d<<" is greatest";
          }
        }
        else if(c>=d){
          cout<<c<<" is greatest";
        }
        else {
          cout<<d<<" is greatest";
        }
      }
      else if(b>=c){
        if(b>=d){
          cout<<b<<" is greatest";
        }
        else{
          cout<<d<<" is greatest";
        }
      }
      else if(c>=d){
        cout<<c<<" is greatest";
      }
      else{
        cout<<d<<" is greatest";
      }
    }
    }
}
  else {
    cout<<"Duuuuuuude";
    exit(1);
  }

}
