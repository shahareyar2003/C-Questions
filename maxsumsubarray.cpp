#include <iostream>
using namespace std;
int maxSumSubarray(int arr[], int n)
{
    int maxSum = 0;
    int currentSum = 0;
    for (int i = 0; i < n; i++)
    {
        currentSum = currentSum + arr[i];
        if (currentSum > maxSum)
        {
            maxSum = currentSum;
        }
        if (currentSum < 0)
        {
            currentSum = 0;
        }
    }
    return maxSum;
}
int main()
{
    int a[] = {10, 30, -40, 50, 10};
    int n = sizeof(a) / sizeof(a[0]);
    int x = maxSumSubarray(a, n);
    cout << "Maximum sum sub array " << x << ".";
    return 0;
}