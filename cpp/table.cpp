#include<iostream>
#include<stdlib.h>

using std::cout;
using std::cin;
using std::endl;


void table(){
  unsigned int i;
  unsigned long int n;
  unsigned long int t;
  cout<<"The number of which you want table : ";
  cin>>n;
  cout<<"Number of terms : ";
  cin>>t;
  if(n&&t){
    for(i=1;i<=t;i++){
      cout<<n<<'*'<<i<<'='<<n*i<<endl;
    }
  }
  else{
    cout<<"Kill you!";
    exit(1);
  }
}
