#include <iostream>

using namespace std;

class Calculator
{
public:
    int a, b;

    // setter
    void setData()
    {
        cout<<"Enter value for a and b:";
        cin>>a>>b;
    }
//    void setData(int x, int y)
//    {
//        a = x;
//        b = y;
//    }
//    void setData()
//    {
//        a = 10;
//        b = 20;
//    }

    // getter
    void getData()
    {
        cout<<"Addition is: "<<(a + b)<<endl;
        cout<<"Subtraction is: "<<(a -b)<<endl;
        cout<<"Multiplication is: "<<(a * b)<<endl;
        cout<<"Division is: "<<(a / b)<<endl;
    }

};

int main()
{
    Calculator obj;
    Calculator obj2;

    //obj.setData(10, 20);
    obj.setData();
    obj.getData();

    cout<<endl<<"***************************************"<<endl;

    //obj2.setData(50, 80);
    obj2.setData();
    obj2.getData();

    return 0;
}
