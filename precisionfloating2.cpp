/*
trunc() Method
    Trunc rounds remove digits after the decimal point. It is defined in the <cmath> header file.
*/
#include<iostream>
#include<cmath>
using namespace std;
int main(){
    double x = 1.411, y = 2.500, z = 1.611;
    cout << trunc(x) << endl;
    cout << trunc(y) << endl;
    cout << trunc(z) << endl;
    return 0;
}