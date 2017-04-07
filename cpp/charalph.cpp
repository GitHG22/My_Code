#include<iostream>


using std::cout;
using std::cin;
using std::endl;

void charalph(){
  char i;

  cout<<"Enter the character : ";
  cin>>i;
  if(i>=48&&i<=57){
    cout<<"A number, it is.\n";//Entering two letters (or more) causes chaos. Needs to be fixed.
  }
  else if(i>=65&&i<=90){
    cout<<"A capital letter, it is.\n";
  }
  else if(i>=97&&i<=122){
    cout<<"A small letter, it is.\n";
  }
  else {
    cout <<"DAE"<<endl;
  }

}
