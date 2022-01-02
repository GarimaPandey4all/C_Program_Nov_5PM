#include <iostream>

//iostream: Input / Output Stream(Flow of Data)

using namespace std;

int main()
{
    int a = 10;

    //std::cout << "Hello world!" << std::endl;

//    :: - scope resolution operator

    cout<<"Hello World"<<endl;

    cout<<"A is: "<<a<<endl;

    cout<<"Enter value for a:";
    cin>>a;

    cout<<"A is: "<<a<<endl;

    return 0;
}
