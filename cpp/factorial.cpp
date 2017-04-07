#include<iostream>

using std::cout;
using std::cin;
using std::endl;


int64_t factorial(int n){
int64_t p=1;

for(int i=1; i<=n; i++) {
      p = p*i;
    }
return p;
}


/*void factorial(){
  unsigned int i;
  unsigned int n;
  unsigned long int p;
  p = 1;
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
}
*/
