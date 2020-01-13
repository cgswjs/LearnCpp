#include<iostream>
using namespace std;

int main()
{
    //create a variable
    int number;
    //console out
    cout<<"Enter an interger: ";
    //console in
    cin >> number;

    int squared = number*number;

    cout<<"Squared number "<<" is "<< squared << endl;
    //the second method needs more process time
    cout<<"Sqaured number "<< number <<" is " << number*number << endl;

    return 0;
}