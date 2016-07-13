#include <iostream> //In Turbo C++, write iostream.h

using namespace std; // basically places std in front of stuff like cout actually becomes std::cout

int main() { // use void for Turbo C++
        int marks; //Declares the variable marks
        cout<<"Enter the marks, out of 100, the child got : ";
        cin>>marks;
        if (marks>100)
                cout<<"LIAR DETECTED. THIS INCIDENT WILL BE REPORTED. PREPARE TO DIE\n";
        else if (marks>=90)
                cout<<"A Grade! Party!\n";
        else if(marks>=75)
                cout<<"B Grade. Better luck next time\n";
        else if(marks>=60)
                cout<<"C Grade. Has Room for improvement\n";
        else if(marks>=40)
                cout<<"D Grade. Whaaaaaat?\n";
        else if(marks<40)
                cout<<"E Grade. DAE\n";

        return 0;
}
