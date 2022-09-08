#include<iostream>
using namespace std;
void rotateArr(int arr[], int d, int n){
        int temp[n];
        for(int i=0;i<n;i++){
            temp[i]=arr[i];
        }
        for(int i=0;i<n-d;i++){
            arr[i]=temp[i+d];
        }
        for(int i=0;i<d;i++){
            arr[n-d+i]=temp[i];
        }
    }
int main(){
    int arr[]={1,2,3,4,5};
    int n=5;
    int d=2;   
    return 0;
}