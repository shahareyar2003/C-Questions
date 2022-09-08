// Time Complexity:-O(n^2)
// #include<stdio.h>
// int main(){
//     int arr[]={8,12,15,0};
//     int flag=1;
//     for(int i=0;i<4;i++){
//         for(int j=i+1;j<4;j++){
//             if(arr[j]<arr[i]){
//                 flag=0;
//                 break;
//             }
//         }
//     }
//     if(flag==0){
//         printf("No");
//     }
//     else{
//         printf("Yes");
//     }
//     return 0;
// }


// Time complexity:-O(n)
#include<stdio.h>
int main(){
    int arr[]={8,12,15,90};
    int f=1;
    for(int i=0;i<3;i++){
        if(arr[i+1]<arr[i]){
           f=0;
           break; 
        }

    }
    if(f==0){ 
        printf("No");
    }
    else{
        printf("Yes");
    }

    return 0;
}