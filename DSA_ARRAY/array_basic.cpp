#include<iostream>
using namespace std;
void printarray(int arr[],int n){
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
}
int main(){
    int n;
    cout<<"Enter the length of array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of array: ";
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    printarray(arr,n);
    return 0;
}