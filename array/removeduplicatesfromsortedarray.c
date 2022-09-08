#include<stdio.h>
int main(){
    int arr[]={10,20,20,30,30,30};
    int n=sizeof(arr)/sizeof(arr[0]);
    int res=1;
    for(int i=1;i<n;i++){
        if((arr[i])!=(arr[res-1])){
            arr[res]=arr[i];
            res++;
        }
    }
    for(int i=0;i<res;i++){
        printf("%d   ",arr[i]);
    }
    return 0;
}