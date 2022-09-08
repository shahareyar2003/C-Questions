#include<stdio.h>
int main(){
    int arr[]={10,5,20,8};
    int pos=0;
    for(int i=0;i<4;i++)
    {
        if(arr[i]>arr[pos]){
            arr[pos]=arr[i];
            pos=i;
        }
    }
    printf("At index %d we got maximum element= %d.",pos,arr[pos]);
    return 0;
}