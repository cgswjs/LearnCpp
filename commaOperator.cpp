#include <iostream>

int main()
{
    int x=2,y=3;
    //read from left to right
    //if 1st one satisfy then the one after comma will not be read
    //comma is like an || operator
    if(x>4, y>1){
        std::cout<<"Somting...."<<std::endl;
    }
    if(x>1 || y<2){
        std::cout<<"Either x or y is satisfied."<<std::endl;
    }
}