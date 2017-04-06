#include<iostream>

using namespace std;
void greatest()
{
    int x,mx,a,mn;
    cout<<"Enter the numbers. Enter 0 when you are done."<<endl;
    cin>>x;
    if(x!=0){
     mx=x;
     mn=x;
    while(a!=0)
    {
        cin>>a;
        if(a!=0){
        if(a>mx)mx=a;
        if(a<mn)mn=a;}
    }
    cout<<"Max=" <<mx;
    cout<<"\nMin=" <<mn;
    }
    else
        exit(0);
}
