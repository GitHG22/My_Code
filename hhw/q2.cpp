#include<iostream>
#include<conio.h>
using namespace std;

int main() {
int amt;
cout<<"Enter Amount : Rs.";
cin>>amt;
cout<<"No. of Rs.100 notes = ";
int rs100 = amt/100;
cout<<rs100<<'\n';
cout<<"No. of Rs.20 notes = ";
int rs20 = (amt%100)/20;
cout<<rs20<<'\n';
cout<<"No. of Rs.10 notes = ";
int rs10 = ((amt%100)%20)/10;
cout<<rs10<<'\n';
cout<<"No. of Rs.5 notes = ";
int rs5 = (((amt%100)%20)%10)/5;
cout<<rs5<<'\n';
cout<<"No. of Rs.2 notes = ";
int rs2 = ((((amt%100)%20)%10)%5)/2;
cout<<rs2<<'\n';
cout<<"Total = "<<rs100+rs20+rs10+rs5+rs2<<'\n';
cout<<"Wew. Boi so rich.";




return 0;
}
