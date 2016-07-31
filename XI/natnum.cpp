#include<iostream>
#include<windows.h>

using namespace std;

void natnum(){
  unsigned int i;
  char q;
  unsigned int n;
  unsigned long int sum;
  sum = 0;
  unsigned long int p;
  p = 1;
  system("cls");
  cout
  <<"So, you wish to generate and find the sum and the product to n "<<endl
  <<"natural numbers(n)"<<endl
  <<"even numbers(e)"<<endl
  <<"odd numbers(o)"<<endl
  ;
  cout<<"n,e or o? ";
  cin>>q;
  cout<<"Number of terms you would like ";
  if(cin>>n){
    if(n!=0)  {
  switch (q) {
    case 'n' : i = 1;
    while (i<n)
      {
      cout<<i<<',';
      sum = sum + i;
      p = p*i;
      i++;
      }
    cout<<i<<'\n';
    cout<<"The sum we all had been waiting for is "<<sum+i<<'\n';
    cout<<"The product thus formed is "<<p*i<<'\n';
      break;
    case 'e' : i = 2;
    while (i<2*n) {
      cout<<i<<',';
      sum = sum + i;
      p = p*i;
      i=i+2;
      }
    cout<<i<<'\n';
    cout<<"The sum we all had been waiting for is "<<sum+i<<'\n';
    cout<<"The product thus formed is "<<p*i<<'\n';
      break;
    case 'o' : i = 1;
    while (i<2*(n-1)) {
      cout<<i<<',';
      sum = sum + i;
      p = p*i;
      i=i+2;
    }
    cout<<i<<'\n';
    cout<<"The sum we all had been waiting for is "<<sum+i<<'\n';
    cout<<"The product thus formed is "<<p*i<<'\n';
      break;
    default : cout<<"Why would you ever do this?";
      exit(1);
  }

  }
  else {
    cout<<"Really?";
    exit(1);
  }
  }
  else  {
    cout<<":/";
    exit(1);
  }
Sleep(1000);
}
