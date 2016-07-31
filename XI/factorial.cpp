#include<iostream>
//#include "../headers/clrscr.h" This thing too ain't working. No idea. Code::Blocks says clrscr() has been used multiple times. And me is like "Wat? I am just calling it! Not declaring you piecan!"
#include<windows.h>

using namespace std;
void factorial(){
  unsigned int i;
  unsigned int n;
  unsigned long int p;
  p = 1;
  system("cls");
  cout<<"Enter the number whose factorial you wish to know : ";
  if (cin>>n&&n<34){
    for(i=1; i<=n; i++) {
      p = p*i;
    }
    cout<<"The factorial of "<<n<<" is "<<p<<endl;
  }
  else if(n>=34){
    cout<<"Whoa dude. It's just a computer. Not Einstein. Keep your hopes low.\n";
  }
  else {
    cout<<"You gotta be kidding me.\n";
    exit(1);
  }
  Sleep(1000);
}
