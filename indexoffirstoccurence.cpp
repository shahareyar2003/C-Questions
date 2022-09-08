#include<iostream>
using namespace std;
// int firstocc(int arr[],int n,int x){
//     for(int i=0;i<n;i++){
//         if(arr[i]==x){
//             return i;
//         }
//     }
//     return -1;
// }
int firstocc(int arr[],int low, int high, int x){
    if(low>high){
        return -1;
    }
    int mid=(low+high)/2;
    if(x>arr[mid]){
        return (arr, mid+1, high,x);
    }
    else if(x<arr[mid]){
        return (arr,low,mid-1,x);
    }
    else{
        if(mid==0 || arr[mid-1]!=arr[mid]){
            return mid;
        }
        else{
            return firstocc(arr, low, mid-1, x);
        }
    }
}
int main(){
    int arr[]={1,2,3,3,3,4,5,6};
    int n=sizeof(arr)/sizeof(arr[0]);
    int dx=firstocc(arr,0,n,3);
    cout<<dx;
    return 0;
}