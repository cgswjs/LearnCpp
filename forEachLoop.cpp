#include <iostream>

int main()
{
    int arr[] = {0,1,2,3,6,7,19};
    //int i : arr is the same as for num in arr in python
    for(int i : arr){
        std::cout<<"Number "<<i<<" is in list <arr>"<< std::endl;
    }



    return 0;
}