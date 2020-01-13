#include<iostream>
int main()
{
    int n1,n2,n3,n4,n5;
    //output a string to ask for input
    std::cout << "Enter five intergers, seperated by space: ";
    //accept inputs
    std::cin >> n1 >>n2 >>n3 >>n4 >>n5;
    int sum = n1+n2+n3+n4+n5;
    //a int/int returns the cloest int
    //so use 5.0f to indicate 5 as a float then a float result will be returned
    float average = sum/5.0f;
    std::cout << "Sum of inputs is "<< sum <<std::endl;
    std::cout << "Average of inputs is "<< average << std::endl;

    return 0;
}