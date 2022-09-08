/*
ceil() Method
    Ceil rounds off the given value to the closest integer which is more than the given value. It is defined in the <cmath> header file.
*/
#include<iostream>
#include<cmath>
using namespace std;
int main(){
    double x=1.411,y=1.500,z=-1.400;
    cout<<ceil(x)<<endl;
    cout<<ceil(y)<<endl;
    cout<<ceil(z)<<endl;
    return 0;
}