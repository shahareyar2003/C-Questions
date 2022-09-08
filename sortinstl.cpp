#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int arr[]={10,20,5,7};
    sort(arr,arr+4);
    for(int x:arr){
        cout<<x<<" ";
    }
    cout<<endl;
    sort(arr,arr+4, greater<int>());
    for(int x:arr){
        cout<<x<<" ";
    }
    return 0;
}