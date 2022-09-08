// setprecision()
    //  Setprecision when used along with ‘fixed’ provides precision to floating-point numbers correct to decimal numbers mentioned in the brackets of the setprecision. It is defined in header file <iomanip>.
#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    double pi = 3.14159, npi = -3.14159;
    cout << fixed << setprecision(0) << pi << " " << npi
         << endl;
    cout << fixed << setprecision(1) << pi << " " << npi
         << endl;
    cout << fixed << setprecision(2) << pi << " " << npi
         << endl;
    cout << fixed << setprecision(3) << pi << " " << npi
         << endl;
    cout << fixed << setprecision(10) << pi << " " << npi
         << endl;
    return 0;
}