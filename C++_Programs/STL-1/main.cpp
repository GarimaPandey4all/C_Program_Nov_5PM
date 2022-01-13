#include <iostream>
#include <array>

using namespace std;

//STL: Standard Template Library - Predefined Classes

//1. array

int main()
{
    array<int, 5> data_array = {10, 20, 30, 40, 50}; // data_array - object name

    array<int, 5> data_array2 = {1, 2, 3, 4, 5};
    //[]
    cout<<data_array[0]<<endl;

    //at()

    cout<<data_array.at(2)<<endl;

    //front()

    cout<<data_array.front()<<endl;

    //back()

    cout<<data_array.back()<<endl;

    //fill()

    data_array.fill(60);

    for(int i = 0; i < 5; i++)
    {
        cout<<data_array[i]<<endl;
    }

    //swap()

    data_array.swap(data_array2);

    cout<<"Array - 1"<<endl;
     for(int i = 0; i < 5; i++)
    {
        cout<<data_array[i]<<endl;
    }

    cout<<"Array - 2"<<endl;
     for(int i = 0; i < 5; i++)
    {
        cout<<data_array2[i]<<endl;
    }

    cout<<"Size of the Array - 1: "<<data_array.size()<<endl;
    cout<<"Size of the Array - 2: "<<data_array2.size()<<endl;

    return 0;
}
