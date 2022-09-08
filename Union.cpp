#include<iostream>

using namespace std;

union money
{                           //Memory
    int rice;               // 4
    char car;               // 1
    float pounds;           // 4

};


int main(){
    // A union is a type of structure that can be used where the amount of memory used is a key factor
    // It is declared by using the keyword "union".
    union money m1;
    m1.rice=34;
    m1.pounds=13;
    m1.car='C';
    cout<<m1.car<<endl;
    cout<<m1.rice<<endl;
    return 0;
}