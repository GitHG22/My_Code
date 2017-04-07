#include<iostream>
#include<cctype>
#include<string>

using std::cout;
using std::cin;
using std::endl;
using std::string;

void strlower(string &str){
  int len=str.size();
  for(int i=0; i<len; i++){
    str[i]=tolower(str[i]);
  }
}
