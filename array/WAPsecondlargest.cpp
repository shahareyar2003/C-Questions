#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,3,5,3,8,5,0};    
    int n=sizeof(arr)/sizeof(arr[0]); 
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if (arr[j]<arr[i]){
                int temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    cout<<arr[n-2];
    return 0;
}