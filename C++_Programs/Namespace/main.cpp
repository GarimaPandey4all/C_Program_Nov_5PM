#include <iostream>

using namespace std;

namespace first {

    int value = 500;
}

namespace second {
    int value = 800;

    int func()
    {
        return value;
    }
}

//global variable
//int value = 500;

int main()
{
    //local variable
    int value = 100;

    cout<<value<<endl;
    cout<<first::value<<endl;
    cout<<second::func()<<endl;

    return 0;
}
