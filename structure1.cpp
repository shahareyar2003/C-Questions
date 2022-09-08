#include<iostream>

using namespace std;


typedef struct employee
{
    int Id;
    float salary;
    char favChar;
}ep;

int main(){
    
    // A structure can contain many different data types
    // To create a structure, use struct keyword and declare each of its members inside curly braces.
    
    ep harry;
    harry.Id=1234;
    harry.salary=123456;
    harry.favChar='C';

    ep khan;
    khan.Id=786;
    khan.salary=98765432;
    khan.favChar='A';

    cout<<"Harry salary = "<<harry.salary<<endl;
    cout<<"Harry favChar = "<<harry.favChar<<endl;
    cout<<"Harry Id = "<<harry.Id<<endl;
    
    cout<<"khan salary = "<<khan.salary<<endl;
    cout<<"khan favChar = "<<khan.favChar<<endl;
    cout<<"khan Id = "<<khan.Id<<endl;

    
    return 0;
}