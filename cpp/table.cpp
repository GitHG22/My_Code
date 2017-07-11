#include<iostream>
#include<stdlib.h>
#include<ctime>
#include<fstream>

using std::cout;
using std::cin;
using std::endl;
using std::clock_t;
using std::fstream;
using std::ios;

void table(){
  unsigned int i;
  unsigned long int n;
  unsigned long int t;
  fstream obj;

  obj.open("Wannacry.dat", ios::out | ios::app);

  clock_t time_in1, time_in2;
  time_in1 = clock();

  cout<<"The number of which you want table : ";
  cin>>n;
  cout<<"Number of terms : ";
  cin>>t;

  time_in2 = clock();

  obj<<"\nYou entered the number "<<n<<" and wanted "<<t<<" products. You took "<<(time_in2-time_in1)/(double)CLOCKS_PER_SEC<<" seconds to enter the above data.\n";

  if(n&&t){
    obj<<"And got the following as output :-\n";
    for(i=1;i<=t;i++){
        cout<<n<<'*'<<i<<'='<<n*i<<endl;
        obj<<n<<'*'<<i<<'='<<n*i<<endl;
    }
  }
  else{
    obj<<"You started to suck\n";
    cout<<"Kill you!";
    exit(1);
  }
  obj.close();
}
