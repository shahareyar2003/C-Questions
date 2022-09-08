#include<iostream>

using namespace std;


struct employee
{
    int Id;
    float salary;
    char favChar;
};

int main(){
    
    // A structure can contain many different data types
    // To create a structure, use struct keyword and declare each of its members inside curly braces.
    
    struct employee harry;
    harry.Id=1234;
    harry.salary=123456;
    harry.favChar='C';

    cout<<"The value is "<<harry.salary<<endl;
    cout<<"The value is "<<harry.favChar<<endl;
    cout<<"The value is "<<harry.Id<<endl;

    
    return 0;
}