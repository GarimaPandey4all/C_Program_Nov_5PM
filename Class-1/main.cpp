#include <iostream>

using namespace std;

//class: blueprint, layout, category
//- logical entity
//- class is a collection of similar types of objects
//
//object: real time
//- physical entity

class HelloWorld {

//    1. Data members / class variables / instance variables
//    2. Member functions / class methods

//Access Specifier / Modifier
//
//    1. public
//    2. private (default)
//    3. protected (inheritance)

//private:

public:

    void display()
    {
        cout<<"Hello World"<<endl;
    }
};

int main()
{
    HelloWorld obj;

    obj.display();

    return 0;
}
