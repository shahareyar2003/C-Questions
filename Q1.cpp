// Write a program to find average of items of array and find nearest items which is close to average
#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,3,4,5,6,7,8,9};
    float s[9]; 

    // To get length of array.
    int n=sizeof(arr)/sizeof(arr[0]);

    // Finding average.
    int sum=0;
    for (int i=0;i<9;i++){
        sum=sum+arr[i];
    }
    float average=sum/9;
    cout<<"Average is "<<average<<endl;

    // Making an array to store absolute difference between arr[] and average.
    for (int j=0;j<9;j++){
        s[j]=abs(arr[j]-average);
    }

    // Finding minimum difference and its index.
    int min=arr[0];
    for (int k=0;k<n;k++){
        if (s[k]<min){
            min=s[k];
        }
    }
    int i;
    for (int l=0;l<n;l++)
    {
        if (s[l]==min){
            i=l;
        }
    }
    cout<<"Minimum value in s[] = "<<min<<" at index "<<i<<endl;
    cout<<"nearest items which is close to average is "<<arr[i]<<endl;

    return 0;
}
