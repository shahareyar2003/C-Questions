#include<stdio.h>
void reverse(int arr[],int n){
    int low=0,high=n-1;
    while(low<high){
        int temp=arr[low];
        arr[low]=arr[high];
        arr[high]=temp;
        low++;
        high--;
    
    }
    for(int j=0;j<4;j++){
        printf("%d  ",arr[j]);
    }
}
int main(){
    int arr[]={10,5,7,30};
    reverse(arr,4);
    return 0;
}