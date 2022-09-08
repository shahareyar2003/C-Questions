// It is used with a pointer variable pointing to a structure or union. The arrow operator is formed by using a minus sign, followed by the greater than symbol as shown below. 

// Syntax:  
//     (pointer_name)->(variable_name)

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
    Complex *ptr=new Complex;
    ptr->SetData(7,8);
    ptr->getData();

    Complex *ptr1=new Complex[4];
    ptr1->SetData(0,0);
    ptr1->getData();
    (ptr1+1)->SetData(1,2);
    (ptr1+1)->getData();
    return 0;
}