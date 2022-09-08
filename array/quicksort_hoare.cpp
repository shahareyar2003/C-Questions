#include<iostream>
#include<valarray>
using namespace std;
int Hoare_partition(int arr[], int low, int high)
{
    int pivot = arr[low];
    int i = low - 1, j = high + 1;
 
    while (true) {

        do {
            i++;
        } while (arr[i] < pivot);

        do {
            j--;
        } while (arr[j] > pivot);
        
        if (i >= j)
            return j;
  
        swap(arr[i],arr[j]);
    }
}
void quicksort(int arr[],int l, int h){
    if(l<h){
        int p=Hoare_partition(arr,l,h);
        quicksort(arr,l,p);
        quicksort(arr,p+1,h);
    }
}
void printarray(int arr[],int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int arr[]={8,4,7,9,3,10,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    quicksort(arr,0,n-1);
    printarray(arr,n);
    return 0;
}