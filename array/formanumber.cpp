#include<iostream>
#include<math.h>
using namespace std;
int main(){
     int n,arr[100];
    cout<<"Enter the total length of array: ";
    cin>>n;
    for (int i=0;i<n;i++)
    {
        cout<<endl<<"Enter arr["<<i<<"] elements: ";
        cin>>arr[i];
    }
    int number=0;
    for(int j=0;j<n;j++){
        number=number+arr[j]*pow(10,j);
    }
    cout<<endl<<"The number is "<<number;
    return 0;
}
