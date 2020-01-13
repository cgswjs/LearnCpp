#include<iostream>

int main()
{
    //a const variable in c++ can not be changed
    //any attempt trying to change a const value will return an error
    //const declarer has to be in front of other declarer
    const float pi = 3.14159;
    std::cout << "Enter circle radius "<<std::endl;
    //create a float variable radius
    float radius;
    //assign input value to variable radius
    std::cin >> radius;

    float circleArea = pi*radius*radius;

    std::cout<<"Area of this circle is: "<<circleArea<<std::endl;

    return 0;
}