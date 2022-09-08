#include<iostream>
using namespace std;
int main(){
    int n,arr[100],pos,num;
    cout<<"Enter the length of array: ";
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Enter the posiition you want to add number: ";
    cin>>pos;
    cout<<"Enter the number: ";
    cin>>num;
    cout<<"\nBefore Insertion array is:"<<endl;
    for(int k=0;k<n;k++){
        cout<<arr[k]<<" "<<endl;
    }
    for(int j=n-1;j>=pos;j--){
        arr[j+1]=arr[j];
    }
    arr[pos]=num;
    n++;    //By adding a number length is increased by 1
    cout<<"\nAfter Insertion array is:"<<endl;
    for(int k=0;k<n;k++){
        cout<<arr[k]<<" "<<endl;
    }
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if (arr[j]<arr[i]){
                int temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    cout<<"Sorting the array: "<<endl;
    for(int k=0;k<n;k++){
        cout<<arr[k]<<" "<<endl;
    }
    return 0;
}