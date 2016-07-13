#include<iostream>

using namespace std;

int main()  {

  int a,b,c;
  cout<<"Enter the three sides of the triangle : ";
  cin>>a>>b>>c;
  if(a+b>c&&b+c>a&&c+a>b)
    if(a==b)
      if(b==c)
      cout<<"Equilateral Triangle";
      else
      cout<<"Isosceles Triangle";

    else if(a==c)
    cout<<"Isosceles Triangle";

    else if(b==c)
    cout<<"Isosceles Triangle";

    else
    cout<<"Scalene Triangle";

  else
  cout<<"No lying. Only Triangle";


}
