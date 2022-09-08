#include<iostream>
using namespace std;

// naive partition
void naive_partition(int arr[], int l, int h, int p){
    int temp[h-l+1],index=0;
    for(int i=l;i<=h;i++){
        if(arr[i]<=arr[p]){
            temp[index]=arr[i];
            index++;
        }
    }
    for(int i=l;i<=h;i++){
        if(arr[i]>arr[p])
        {
            temp[index]=arr[i];
            index++;
        }
    }
    for(int i=l;i<=h;i++){
        arr[i]=temp[i-l];
        cout<<arr[i]<<" ";
    }
    // for(int i=l;i<=h;i++){
    // }
    // Aux Space = O(n)
    // Time = O(n)
}

// Lomuto partition
void lpartition(int arr[], int l, int h){
    int pivot=arr[h];  // Always last
    int i=l-1;
    for (int j=l; j<=h-1; j++){
        if(arr[j]<pivot){
            i++;
            int temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
        }
    }
    int tem=arr[i+1];
    arr[i]=arr[h];
    arr[h]=tem;
    for(int i=0;i<=h;i++){
        cout<<arr[i]<<"  ";
    }
}
int main(){
    int arr[]={5,13,6,9,12,11,8};
    int arr1[]={10,80,30,90,40,50,70};
    naive_partition(arr,0,6,6);
    cout<<endl;
    lpartition(arr1,0,6);
    return 0;
}