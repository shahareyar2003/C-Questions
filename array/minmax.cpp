#include<iostream>
using namespace std;
int main(){
    int arr[5];
    for(int i=0;i<5;i++){
        cin>>arr[i];
    }
    for(int i=0;i<5;i++){
        for(int j=(i+1);j<5;j++){
            if(arr[j]<arr[i]){
                int temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    int min=0;
    for(int i=0;i<4;i++){
        min=min+arr[i];
    }
    int max=0;
    for(int i=1;i<5;i++){
        max=max+arr[i];
    }
    cout<<min<<" "<<max;
}