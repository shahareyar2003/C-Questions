#include<iostream>
using namespace std;
class Simple{
    int data1,data2,data3;
    public:
        Simple(){   // Default Constructor
            data1=10;
            data2=10;
            data3=10;
        }
        Simple(int a,int b=0,int c=0){
            data1=a;
            data2=b;
            data3=c;
        }
        void PrintData(){
            cout<<"The Data is "<<data1<<", "<<data2<<"and "<<data3<<endl;
        }
};
int main(){
    Simple s(23);
    s.PrintData();

    Simple s1(1,2);
    s1.PrintData();
    
    Simple s3(4,5,6);
    s3.PrintData();

    Simple s4;
    s4.PrintData();
    return 0;
}