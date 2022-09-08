#include<iostream>
#include<vector>
#include<set>
using namespace std;
int countDist(int arr[],int n){
    /*   Time complexity:- O(n^2)
        Aux Space:-O(1)*/
    int count=0;
    for(int i=0;i<n;i++){
        bool flag=false;
        for(int j=0;j<i;j++){
            if(arr[i]==arr[j]){
                flag=true;
                break;
            }
        }
        if(flag==false){
            count++;
        }
    }
    return count;
}

int Count_Distinct(int arr[],int n){
    set<int>s;
    for(int i=0;i<n;i++){
        s.insert(arr[i]);
    }
    return s.size();

}
int main(){
    int arr[]={15,12,13,12,13,13,18};
    int n=sizeof(arr)/sizeof(arr[0]);
    
    cout<<countDist(arr,n)<<endl<<Count_Distinct(arr,n); 
    return 0;
}
