#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector <int> v1(5, 10); // size = 5, value at all places = 10
    vector <string> v2(5, "hi");

    //subscript operator

    cout<<v2[3]<<endl;
    cout<<v1[2]<<endl;

    //at(), front(), back()

    cout<<"at()"<<v1.at(3)<<endl;
    cout<<"front()"<<v2.front()<<endl;
    cout<<"back()"<<v1.back()<<endl;

    return 0;
}
