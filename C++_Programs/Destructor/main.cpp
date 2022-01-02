#include <iostream>

using namespace std;

class Hello {

public:

    Hello()
    {
        cout<<"Hello How are you"<<endl;
    }

    //Destructor
    ~Hello()
    {
        cout<<"Destructor Called"<<endl;
    }

};

int main()
{
    Hello obj;

    return 0;
}
