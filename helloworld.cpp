//This is the first cpp file I wrote
//iostream is input output stream
//#include is like import in python
#include <iostream>
#include <iomanip>
//namespace is used to prevent name collision
//same variable name can exist in different namespaces
using namespace std;

//main function contains all the logical code
int main(){
    //count means console output
    //<< is insertion operator
    //endl is same as \n in python
    cout << "Hello World!" << endl;
    //setw set the total width that 2019 can occupy
    cout << setw(5)<<2019 << " is today's year."<<endl;
    //specify variable type and variable name
    //unsigned value can only be positive
    //signed value can be either
    unsigned int varyA = 10;
    
    
    return 0;
}