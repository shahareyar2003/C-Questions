#include <stdio.h>
int largestint(int arr[], int n)
{
    int idx = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > arr[idx])
        {
            idx = i;
        }
    }
    return idx;
}
int secondlarg(int arr[], int n)
{
    int l = largestint(arr, n);
    int res = -1;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] != arr[l])
        {
            if (res == -1)
            {
                res = i;
            }
            else if (arr[i] > arr[res])
            {
                res = i;
            }
        }
    }
    return res;
}
int main()
{
    int arr[] = {10, 5, 8, 20};
    // int x = largestint(arr, 4);
    // printf("Largest element %d\n", arr[x]);
    int y = secondlarg(arr, 4);
    printf("Second largest element %d", arr[y]);
    return 0;
}