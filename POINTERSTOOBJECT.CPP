#include<iostream>
using namespace std;
class Complex{
    int real, imaginary;
    public:
        void getData(){
            cout<<"The real part is "<<real<<endl;
            cout<<"The Imaginary part is "<<imaginary<<endl;
        }
        void SetData(int a,int b){
            real=a;
            imaginary=b;
        }
};
int main(){
    // Complex c1;
    // Complex *ptr=&c1;
    // c1.SetData(5,8);
    Complex *ptr=new Complex;
    (*ptr).SetData(5,8);
    // c1.getData();
    (*ptr).getData();
    return 0;
}