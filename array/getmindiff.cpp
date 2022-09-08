#include<iostream>
#include<algorithm>
using namespace std;
// Naive Solution
// int getmindiff(int arr[], int n){
//     int res=INT_MAX;
//     for (int i = 1; i < n; i++)
//     {
//         for (int j= 0; j < i; j++)
//         {
//             res=min(res, abs(arr[i]-arr[j]));
//         }
        
//     }
//     return res;
// }

// Efficient Solution
int getmindiff(int arr[], int n){
    sort(arr,arr+n);
    int res=INT_MAX;
    for(int i=1;i<n;i++){
        res=min(res,arr[i]-arr[i-1]);
    }
    return res;
}
int main(){
    int arr[]={8,15};
    int n=sizeof(arr)/sizeof(arr[0]);
    int y=getmindiff(arr,n);
    cout<<y;
    return 0;
}