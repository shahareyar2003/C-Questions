#include<iostream>
#include<valarray>
using namespace std;
int partition(int arr[], int low, int high)
{
    int pivot = arr[low];
    int i = low - 1, j = high + 1;
 
    while (true) {
        // Find leftmost element greater than
        // or equal to pivot
        do {
            i++;
        } while (arr[i] < pivot);
 
        // Find rightmost element smaller than
        // or equal to pivot
        do {
            j--;
        } while (arr[j] > pivot);
 
        // If two pointers met.
        if (i >= j)
            return j;
 
        swap(arr[i],arr[j]);
    }
}
int main(){
    int arr[]={5,3,8,4,2,7,1,10};
    int res=partition(arr,0,7);
    cout<<res<<endl;
    for(int i=0;i<=7;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}