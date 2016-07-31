#include<iostream>
#include<windows.h>

using namespace std;

void fib(){
  unsigned int i;
  unsigned int n;
  char q;
  unsigned long int t1;
  unsigned long int t2;
  unsigned long int t3;
  system("cls");
  t1 = 0;
  t2 = 1;
  cout<<"Till how many terms should I? ";
  cin>>n;
  cout<<"You want the sum? (y/n)";
  cin>>q;
  cout<<t1<<','<<t2;
  if (q=='y'){
    unsigned long int sum;
    sum = t1 + t2;
    for (i = 3; i<=n; i++) {
      t3 = t1 + t2;
      cout<<','<<t3;
      sum = sum + t3;
      t1 = t2;
      t2 = t3;
    }
    cout<<"\nThe SUM is "<<sum;
  }
  else if(q=='n'){
    for(i = 3; i<=n; i++){
      t3 = t1 + t2;
      cout<<','<<t3;
      t1 = t2;
      t2 = t3;
    }
  }
  else {
    cout<<"EVIL!";
    exit(1);
  }
Sleep(1000);
}
