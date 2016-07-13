#include <iostream>

using namespace std;

int main()  {
        float km;
        cout<<"Enter distance travelled : ";
        cin>>km;
        if (km<0)
                cout<<"Really?";
        else if(km==0)
                cout<<"Rs.0 Woohoo! Free Ride!";
        else if(km<=5)
                cout<<"It makes you short of Rs."<<25+10*(km-1);
        else if(km<=13)
                cout<<"Give the driver Rs."<<65+12.5*(km-5);
        else if(km>13)
                cout<<"Say bye bye to Rs."<<15*km;

        return 0;
}
