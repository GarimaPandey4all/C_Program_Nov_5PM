#include <iostream>
#include <tuple>

using namespace std;

//Standard Template Library
//tuple is equal to row

int main()
{
    tuple<string, int, int> t1;
    tuple<float, int, string> t2;

    //insert in a tuple
    t1 = make_tuple("New Delhi", 25, 34569098);
    t2 = make_tuple(65.78f, 30, "Ram Kumar");

    //Accessing values from the tuple
    cout<<"Tuple 1:"<<get<0>(t1)<<" "<<get<1>(t1)<<" "<<get<2>(t1)<<endl;
    cout<<"Tuple 2:"<<get<0>(t2)<<" "<<get<1>(t2)<<" "<<get<2>(t2)<<endl;

    return 0;
}
