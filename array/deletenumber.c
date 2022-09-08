#include<stdio.h>
int main(){
    int arr[5]={12,10,15,7,9};
    int pos,i,j;
    scanf("%d",&pos);
    int idx=pos-1;
    for(i=idx;i<5;i++){
        arr[i]=arr[i+1];
    }
    for(i=0;i<4;i++){
        printf("%d  ",arr[i]);
    }
    return 0;
}