#include<iostream>
using namespace std;
int main(){
    int n,arr[100],f=0;
    cout<<"Enter the length of array: ";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int j=0;j<n;j++){
        for(int k=j+1;k<n;k++){
            if(arr[j]==arr[k]){
                f=1;
            }
        }
    }
if(f==0){
    cout<<"No Duplicate items."<<endl;
}
else{
    cout<<"Duplicate items."<<endl;
}
    return 0;
}