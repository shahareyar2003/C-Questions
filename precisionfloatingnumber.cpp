/* floor(), ceil(), trunc(), round() and setprecision()
1. floor() Method
    Floor rounds off the given value to the closest integer which is less than the given value. It is defined in the <cmath> header file.
    */
#include<iostream>
#include<cmath>
using namespace std;
int main(){
    double x=1.411,y=1.500,z=-1.400;
    cout<<floor(x)<<endl;
    cout<<floor(y)<<endl;
    cout<<floor(z)<<endl;
    return 0;
}