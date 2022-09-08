#include<stdio.h>
int main(){
    int arr[]={1,2,3,4,5,6,7};
    int *p[7]=&arr;
    for(int i=0;i<7;i++){
        printf("%d  ",p[i]);
    }
    return 0;
}