#include<iostream>
using namespace std;
int main(){
    int n,arr[100];
    cout<<"Enter the total length of array: ";
    cin>>n;
    for (int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"Before Interchanging: "<<endl;
    for(int j=0;j<n;j++)
    {
        cout<<arr[j]<<" ";
    }
    int min=arr[0],pos_min=0;
    for (int j=0;j<n;j++)
    {
        if (arr[j]<min){
            min=arr[j];
            pos_min=j;
        }
    }
    int max=arr[0],pos_max=0;
    for(int k=0;k<n;k++)
    {
        if(arr[k]>max){
            max=arr[k];
            pos_max=k;
        }
    }
    int temp;
    temp=arr[pos_min];
    arr[pos_min]=arr[pos_max];
    arr[pos_max]=temp;
    cout<<endl<<"After interchanging"<<endl;
    for(int j=0;j<n;j++)
    {
        cout<<arr[j]<<" ";
    }
    return 0;
}
