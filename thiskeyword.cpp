#include <iostream>
using namespace std;
class A
{
    int a;
// “this” is a keyword that is an implicit pointer. “this” pointer points to the object which calls the member function. 
public:
    void setData(int a)
    {
        this->a = a;
    }
    void getData()
    {
        cout << "The value of a is " << a << endl;
    }
};
int main()
{
    A arnab;
    arnab.setData(4);
    arnab.getData();
    return 0;
}