#include<iostream>
#include"../headers/pointstuff.h"

using std::cout;
using std::cin;
using std::endl;


int playswithnumbers(){
    cout<<"\n\n\n-------Play with Numbers-------\nv0.1.3"
        <<"\n\nSo, you wanna play with numbers? Here goes\n\n";
    long int num[128];
    int k=0;
    char a,b;
    unsigned int n;
    cout<<"Would you like to"<<endl
        <<"1. Enter all the numbers yourself."<<endl
        <<"2. Use a predefined set of numbers."<<endl
        <<"e. Exit"<<endl
        <<"Enter your choice"<<endl;
    cin>>a;
    switch (a){
        case 49: cout<<"How many numbers will you enter? (Choose from a maximum of 128, and a minimum of 1) ";
                cin>>n;
                if(n<=128&&n>0){
                    cout<<"Enter the integers, one after the another. Press enter after each number.\n";
                    for(unsigned int i=0;i<n;i++){
                        cin>>num[i];
                    }
                }
                else{
                    cout<<"rekt";exit(-1);
                    }
                break;
        case 50: cout<<"\nWhich predefined set?"<<endl
                    <<"1. First n natural numbers"<<endl
                    <<"2. First n terms of the Fibonacci Series"<<endl
                    <<"3. First n Binomial Coefficients"<<endl
                    <<"Choose your option ";
                    cin>>b;
                    if(b=='1'){
                        cout<<"How many numbers do you want? (Enter a number smaller than 128) ";cin>>n;
                        for(unsigned int i=0;i<n;i++){
                            num[i]=i+1;
                        }
                    }
                    else if(b=='2') {
                        cout<<"How many terms do you want? ";cin>>n;
                        for(unsigned int i=0; i<n; i++){
                            if(i==0){num[i]=1;}
                            else if(i==1){num[i]=1;}
                            else {
                                num[i]=num[i-1]+num[i-2];
                            }
                        }
                    }
                    else if(b=='3'){
                        cout<<"How many Binomial Coefficients do you want? ";cin>>n;

                            for(unsigned int i=0; i<=n; i++){
                                num[i]=1;
                                    for(unsigned int j=0; j<i; j++){
                                        num[i]*=n-j;
                                        }
                                    num[i]/=factorial(i);

                            }
                            n++; //Because ahead of this, all functions think the numbers have the range 0 to n but in binomial we get n+1 terms
                        }
                    break;
        case 'e': cout<<"K";
        exit(0); break;
    }

    int flag1=0;
    long unsigned int prod=1, sum=0;

    long int index[128][3];
    for(int z=0; z<128;z++){index[z][2]=0;}


    cout<<"The numbers, in the order of how you entered them, are ";
    for(unsigned int i=0;i<n;i++){
        cout<<num[i]<<',';
        sum+=num[i];
        prod*=num[i];

        //Building up the index
        //index[x][0] is the number, index[x][1] is the frequency, index[x][2] is the location it was first seen

        for(unsigned int j=0;j<i;j++){
            if(num[i]==index[j][0]){
                index[j][1]++;
                flag1=1;
                break;
            }
        }
        if(flag1==0) {
            index[k][0]=num[i];
            index[k][1]++;
            index[k][2]=i+1;
            k++;
        }
        flag1=0;
        //index building ends here
    }

    cout<<'\b'<<' ';

    int mini=index[0][0], maxi=index[0][0];


    //Check if Arithmetic Progression or not
    int ap=0;

    for(unsigned int i=2;i<n;i++){
        if((num[i]-num[i-1])==(num[i-1]-num[i-2])){
            continue;
        }
        else{
            ap=1;
            break;
        }
    }

    //AP check ends here.



    //GP check. Beacuse why not.

    int gp=0;

    for(unsigned int i=2; i<n; i++){
        if((num[i-1]*num[i-1])==(num[i-2]*num[i])){
            continue;
        }
        else{
            gp=1;
            break;
        }
    }

    //GP check ends here.



    cout<<"\nAnalyzing inputted data..."
        <<"\nDistinctively, the numbers you entered are ";
    for(int i=0;i<k;i++){
        cout<<index[i][0]<<',';
        if(index[i][0]>maxi){
            maxi=index[i][0];
        }
        if(index[i][0]<mini){
            mini=index[i][0];
        }
    }
    cout<<'\b'<<' ';
    cout<<"\nTheir sum is  "<<sum<<" and the product is "<<prod<<"\nThe largest number is "<<maxi<<" and the smallest one is "<<mini;
    if(ap==0){cout<<"\nThe series of numbers is an AP.\n";}
    else{cout<<"\nThe series of numbers is not an AP.\n";}
    if(gp==0){cout<<"\nThe series of numbers is a GP.\n";}
    else{cout<<"\nThe series of numbers is not a GP.\n";}

    char answer;
    int bb;
    do {
      cout<<"Would you like to find the memory address of any number that you have stored?\nEnter your choice (y/n) : ";
      cin>>answer;
      if(answer=='y'){
        cout<<"Whichth number? : ";
        cin>>bb;
        cout<<&num[bb-1]<<endl;
      }
      else if(answer=='n'){
      }
      else {
        for(unsigned int i=0; i>=0;i++){ // *lenny face here*
          cout<<"LoL";
        }
      }
      }while(answer=='y');

    return 0;
}
