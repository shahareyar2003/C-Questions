#include<iostream>
#include<valarray>
using namespace std;
// lomuto partition
int lpartition(int arr[], int l, int h){
    int pivot=arr[h];
    int i=l-1;
    for(int j=l; j<=h-1; j++){
        if(arr[j]<pivot){
            i++;
            swap(arr[i],arr[j]);
        }
    }
    swap(arr[i+1],arr[h]);
    return (i+1);
}

void quicksort(int arr[],int l, int h){
    if(l<h){
        int p=lpartition(arr,l,h);
        quicksort(arr,l,p-1);
        quicksort(arr,p+1,h);

    }
}
void printarray(int arr[],int n){
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
}
int main(){
    int arr[]={8,4,7,9,3,10,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    // int y=lpartition(arr,0,n-1);  current position of pivot
    quicksort(arr,0,n-1);
    printarray(arr,n);
    return 0;
}