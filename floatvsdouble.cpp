#include<iostream>
using namespace std;
int main(){
    float d=34.4f;
    long double e=34.4l;
    cout<<"The size of 34.4 is "<<sizeof(34.4)<<endl;   // by default double
    cout<<"The size of 34.4f is "<<sizeof(34.4f)<<endl;
    cout<<"The size of 34.4F is "<<sizeof(34.4F)<<endl;
    cout<<"The size of 34.4l is "<<sizeof(34.4l)<<endl; 
    cout<<"The size of 34.4L is "<<sizeof(34.4L)<<endl;


}