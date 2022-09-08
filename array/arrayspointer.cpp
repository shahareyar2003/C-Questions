#include<iostream>

using namespace std;
int main(){
    int arr[]={1,2,3,4,5,6,7};
    // int *ptr=arr;   // Here the arr indicates the address of the first element of array.
    int *ptr=&arr[0];

    cout<<"*(ptr) = "<<*(ptr)<<endl;
    cout<<"*(ptr+1) = "<<*(ptr+1)<<endl;
    cout<<"*(ptr+2) = "<<*(ptr+2)<<endl;
    cout<<"*(ptr+3) = "<<*(ptr+3)<<endl;
    cout<<"*(ptr+4) = "<<*(ptr+4)<<endl;
    cout<<"\n\n";
    cout<<"ptr = "<<ptr<<endl;
    cout<<"ptr stores the address of arr[0] and so on..."<<endl;
    cout<<"ptr+1 = "<<ptr+1<<endl;
    cout<<"ptr+2 = "<<ptr+2<<endl;
    return 0;
}