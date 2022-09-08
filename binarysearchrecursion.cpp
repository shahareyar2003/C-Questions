#include<iostream>
using namespace std;
int bsearch(int arr[], int low,int high, int x){
    if(low>high)
    {
        return -1;
    }
    int mid=(low+high)/2;
    if(arr[mid]==x){
        return mid;
    }
    else if(arr[mid]>x){
        return bsearch(arr,low,mid-1,x);
    }
    else{
        return bsearch(arr,mid+1,high,x);
    }
}
int main(){
    int arr[]={1,2,3,4,5,6};
    int n=sizeof(arr)/sizeof(arr[0]);
    int x;
    cout<<"Enter search element: ";
    cin>>x;
    int idx=bsearch(arr,0,n,x);
    cout<<x<<" is found at index "<<idx<<".";
    return 0;
}