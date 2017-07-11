#include<iostream>
#include<fstream>

using std::cout;
using std::cin;
using std::endl;
using std::fstream;
using std::ios;

void charalph(){
  char i;
  fstream obj;
  obj.open("Wannacry.dat", ios::out | ios::app);

  cout<<"Enter the character : ";
  cin>>i;

  obj<<"\nYou were pleasantly surprised when you discovered that "<<i<<" is a ";

  if(i>=48&&i<=57){
    cout<<"A number, it is.\n";//Entering two letters (or more) causes chaos. Needs to be fixed.
    obj<<"number!\n";
  }
  else if(i>=65&&i<=90){
    cout<<"A capital letter, it is.\n";
    obj<<"capital letter!\n";
  }
  else if(i>=97&&i<=122){
    cout<<"A small letter, it is.\n";
    obj<<"small letter!\n";
  }
  else {
    cout <<"DAE"<<endl;
    obj<<"joke, like your life!\n";
  }
  obj.close();
}
