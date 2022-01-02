#include <iostream>

using namespace std;

class Swapping {

private:
int a, b;

public:
    //constructor: special method, because the method name is same as class name.
//    It is used to initialize the instance variables.
//    It is called automatically when the object is created.

    //Default Cons
    Swapping()
    {
        cout<<"Swapping Here"<<endl;
        a = 10;
        b = 20;
    }

    //Parameterized Constructor
    Swapping(int x, int y)
    {
        //instance variables = local variables
        a = x;
        b = y;
    }

    void getData()
    {
//        int temp;
//
//        temp = a;
//        a = b;
//        b = temp;

    //Without Third variable swapping

//        a = a + b;
//        b = a - b; // 10
//        a = a - b; // 20


//        a = a * b;
//        b = a / b; // 10
//        a = a / b;

//        10 = 0000 1010
//        20 = 0001 0100 ^
//             0001 1110 = 30
//             0000 1010 = 10
//             0001 0100 = 20

        a = a ^ b; // 30
        b = a ^ b; // 10
        a = a ^ b;

        cout<<a<<" "<<b<<endl;
    }

};


int main()
{
    //Swapping obj;//Default Cons call
    Swapping obj(10, 20); // parameterized cons call

    obj.getData();

    return 0;
}
