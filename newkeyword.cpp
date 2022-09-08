#include<iostream>
using namespace std;
// The new operator is an operator which denotes a request for memory allocation on the Heap. 
int main(){
    
    float *p = new float(40.78);
    cout << "The value at address p is " << *(p) << endl;
    
    return 0;
}
