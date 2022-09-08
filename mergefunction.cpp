#include<iostream>
using namespace std;
void merge(int a[], int low, int mid, int high){
    /*   Setting up auxiliary arrays.   */
    int n1=mid-low+1, n2=high-mid;
    int left[n1], right[n2];
    for(int i=0; i<n1; i++){
        left[i]=a[low+i];
    }
    for(int i=0; i<n2; i++){
        right[i]=a[n1+i];
    }

    /*   Standard merge logic.   */
    int i=0,j=0,k=0;
    while(i<n1 && j<n2){
        if(left[i]<=right[j]){
            a[k]=left[i];
            i++;
            k++;
        }
        else{
            a[k]=right[j];
            k++;
            j++;
        }
    } 
    while (i<n1)
    {
        a[k]=left[i]; 
        i++;
        k++;
    }
    while (j<n2)
    {
        a[k]=right[j];
        j++;
        k++;
    }
    for(int i=0;i<high+1;i++){
        cout<<a[i]<<" ";
    }
}
int main(){
    int arr[]={10,15,20,40,8,11,55};
    int n=sizeof(arr)/sizeof(arr[0]);
    int low=0, high=n-1;
    int mid=(low+high)/2;
    merge(arr,low,mid,high);
    return 0;
}