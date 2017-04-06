#include<iostream>
#include<cctype>
#include<string.h>

using namespace std;

string strlower(string str){
  cin>>(str);
  int len=str.size();
  for(int i=0; i<len; i++){
    str[i]=tolower(str[i]);
  }
  return str;
}
