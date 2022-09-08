#include <iostream>
using namespace std;
void bubble_sort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - 1 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

void insertion_sort(int arr[], int n)
{
    for (int i = 1; i < n; i++)
    {
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}

void swap1(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

void selectionSort(int arr[], int n)
{
    int i, j, min_idx;
    for (i = 0; i < n - 1; i++)
    {
        min_idx = i;
        for (j = i + 1; j < n; j++)
            if (arr[j] < arr[min_idx])
                min_idx = j;

        swap1(&arr[min_idx], &arr[i]);
    }
}

void merge(int arr[], int arr1[], int m, int n)
{
    int i = 0, j = 0;
    while (i < m && j < n)
    {
        if (arr[i] <= arr1[j])
        {
            cout << arr[i] << " ";
            i++;
        }
        else
        {
            cout << arr1[j] << " ";
            j++;
        }
    }
    while (i < m)
    {
        cout << arr[i] << " ";
        i++;
    }
    while (j < n)
    {
        cout << arr1[j] << " ";
        j++;
    }
}
void printarray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}
int main()
{
    int arr[] = {1, 3, 5, 7, 9};
    int arr1[] = {2, 4, 6, 8, 10};
    int m = sizeof(arr1) / sizeof(arr1[0]);
    int n = sizeof(arr) / sizeof(arr[0]);
    merge(arr, arr1, n, m);
    cout << endl;
    // bubble_sort(arr,n);
    // insertion_sort(arr, n);
    selectionSort(arr, n);
    printarray(arr, n);
    return 0;
}