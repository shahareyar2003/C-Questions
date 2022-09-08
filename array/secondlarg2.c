#include<stdio.h>
int secondlargest(int arr[],int n){
    int res=-1,largest=0;
    for(int i=1;i<n;i++){
        if(arr[i]>arr[largest]){
            res=largest;
            largest=i;
        }
        else if(arr[i]!=arr[largest]){
            if(res==-1||arr[i]>arr[res]){
                res=i;
            }
        }
    }
    return res;
}
int main(){
    int arr[]={5,20,12,20,8};
    int x=secondlargest(arr,5);
    printf("Second largest element= %d",arr[x]);
    return 0;
}

// #include<stdio.h>
// int main(){
//     int x=5;
//     int y=x++ + ++x;
//     printf("%d",y);
//     return 0;
// }