#include <iostream>

int main()
{
    int n;
    std::cout << "Enter int n: ";
    std::cin>>n;

    int sum = 0;
    //i++ and ++i in C++ ARE DIFFERENT
    //++i makes i increase 1 each time
    //i++ will return i before the increment occur
    for(int i=0;i<=n;++i)
    {
        int number;
        std::cout<<"Enter: "<< number << ". number: ";
        std::cin >> number;    
        sum = sum + number;
        std::cout<<"Sum of current numbers are "<< sum << std::endl;
    }
}