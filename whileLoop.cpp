#include <iostream>

int main()
{
    //while do
    int x=6;
    while(x>0){
        std::cout<<"Current pointer is "<< x << std::endl;
        --x;
    }

    //do while
    int y = 8;
    do{
        std::cout<<"This is the do part of do-while loop."<<std::endl;
    }while(y>9);

    return 0;
}