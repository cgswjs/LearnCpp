#include <iostream>
#define PI 3.14

int main()
{
    auto x = 10.5;
    auto y = 10;

    int var1 = 10;
    // constructor initialization ()
    int var2 (10);
    // uniform initialization {}
    int var3{20};
    auto var{6};
    std::cout<< "x is "<< x << " and it's type is "<< typeid(x).name()<<std::endl;
}