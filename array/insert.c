#include<stdio.h>
int main(){
    int arr[6]={5,3,8,9,5,7};
    int ele,pos;
    printf("Enter the position where U want to add element:- ");
    scanf("%d",&pos);
    printf("\nEnter element U want to add:- ");
    scanf("%d",&ele);
    int idx=pos-1;
    for(int i=5;i>=idx;i--){
        arr[i+1]=arr[i];
    }
    arr[idx]=ele;
    for(int i=0;i<=6;i++){
        printf("%d  ",arr[i]);
    }
    return 0;
}