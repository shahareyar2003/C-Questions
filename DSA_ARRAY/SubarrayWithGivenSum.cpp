#include<iostream>
using namespace std;
void subArraySum(int arr[], int n, int sum)
{
    int currentSum, i, j;
     for (i = 0; i < n; i++) {
        currentSum = arr[i];
        for (j = i + 1; j < n; j++) {
            if (currentSum == sum) {
                cout << "Sum found between indexes " << i
                     << " and " << j - 1 << endl;
                return;
            }
            if (currentSum > sum || j == n)
                break;
            currentSum = currentSum + arr[j];
        }
    }
 
    cout << "No subarray found";
    return;
}
int main(){
    int arr[]={1,2,3,4,5,6,7,7};
    int n=sizeof(arr)/sizeof(arr[0]);   
    int sum=1;
    subArraySum(arr,n,sum);
    
    return 0;
}