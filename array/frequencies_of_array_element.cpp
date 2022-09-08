#include<iostream>
using namespace std;
void printfreq(int arr[],int n){
    for(int i=0;i<n;i++){
        bool flag=false;
        for(int j=0;j<i;j++){
            if(arr[i]==arr[j]){
                flag=true;
                break;
            }
        }
        if(flag==true){
            continue;
        }
        int frequency=1;
        for(int j=i+1;j<n;j++){
            if(arr[i]==arr[j]){
                frequency++;
            }
        }
        cout<<arr[i]<<" = "<<frequency<<endl;
        
    }

}
int main(){
    int arr[]={10,20,20,30,10};
    int n=sizeof(arr)/sizeof(arr[0]);
    printfreq(arr,n);
     
    return 0;
}