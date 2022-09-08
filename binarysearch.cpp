#include<iostream>
using namespace std;
int bisearch(int arr[],int n, int x){
    int low=0, high=n-1;
    while(low<=high)
    {
        int mid=(high+low)/2;
        if(arr[mid]==x){
            return mid;
        }
        else if(arr[mid]>x){
            high=mid-1;
        }
        else{
            low=mid+1;
        }
    }
    return -1;
}
int main(){
    int arr[]={1,2,3,4,5,6};
    int n=sizeof(arr)/sizeof(arr[0]);
    int x;
    cout<<"Enter search element: ";
    cin>>x;
    int idx=bisearch(arr,n,x);
    cout<<x<<" is found at index "<<idx<<".";
    return 0;
}