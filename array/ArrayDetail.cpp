#include<iostream>
using namespace std;

// An array is a collection of similar data elements(same types).
// In an array of size n, the index ranges from 0 to n-1.
// To declare and define an array, we must specify its name, type, and size.
// There is no single statement that can read, access, or print all elements of the array.
// Address of data elements, A[k] = Base address + word size of one element in memory (k-lower bound)
int main(){
    int arr[]={1,45,54,71,76,12};
//  Computes size of array.
    int n=sizeof(arr)/sizeof(arr[0]);  // one int store 8 bytes Therefore 6 store 24.
    cout<<n<<endl;

//  Print the array.
    for (int i=0;i<n;i++)
        cout<<arr[i]<<" "<<endl;
    
//  Find the minimum element.
    int min=arr[0];
    for (int l=0;l<n;l++)
    {
        if (min>arr[l])
        {
            min=arr[l];
        }
    }
    cout<<"Minimum Element = "<<min<<endl;

//  Find the maximum element.
    int max=arr[0];
    for (int m=0;m<n;m++)
    {
        if (max < arr[m])
        {
            max=arr[m];
        }
    }
    cout<<"Maximum Element = "<<max<<endl;

//  Find the index where we get maximum element and minimum elements.
    for(int a=0;a<n;a++)
    {
        if (arr[a]==max)
        {
            cout<<"At Index "<<a<<", We get maximum value."<<endl;
        }
        else if (arr[a]==min)
        {
            cout<<"At Index "<<a<<", We get minimum value."<<endl;
        }
        else{
            continue;
        }
    }


    return 0;
}