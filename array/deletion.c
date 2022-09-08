#include<stdio.h>
int main(){
    int arr[]={1,6,3,4,2,8,9,6};
    int n;
    printf("Enter element you want to delete:- ");
    scanf("%d",&n);
    int i;
    for(i=0;i<8;i++){
        if(arr[i]==n){
            break;
        }
    }
    for(int j=i;j<n-1;j++){
        arr[j]=arr[j+1];
    }
    for(i=0;i<7;i++){
        printf("%d  ",arr[i]);
    }
    return 0;
}