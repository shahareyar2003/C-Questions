// Efficiency
#include<stdio.h>
int main(){
    int arr[]={8,5,0,20,0,1 ,0};
    int n=sizeof(arr)/sizeof(arr[0]);
    int count=0;
    for(int i=0;i<n;i++){
        if (arr[i]!=0){
            // swap
            int temp=arr[i];
            arr[i]=arr[count];
            arr[count]=temp;
            count++;
        }
    }
    for(int i=0;i<n;i++){
        printf("%d   ",arr[i]);
    }
    return 0;
}



// #include<stdio.h>
// void movetoend(int arr[],int n){
//     for(int i=0;i<n;i++){
//         if(arr[i]==0){
//             for(int j=(i+1);j<n;j++){
//                 if(arr[j]!=0){
//                     int temp=arr[i];
//                     arr[i]=arr[j];
//                     arr[j]=temp;
//                 }
//             }
//         }
//     }
// }
// int main(){
//     int arr[]={8,5,0,20,0,1 ,0,9};
//     movetoend(arr,8);
//     for(int i=0;i<8;i++){
//         printf("%d   ",arr[i]);
//     }
//     return 0;
// }