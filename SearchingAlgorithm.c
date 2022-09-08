/*
1. Linear Search:-
    1. Start from the leftmost element of arr[] and one by one compare x with each element of arr[]
    2. If x matches with an element, return the index.
    3. If x doesn’t match with any of the elements, return -1

#include <stdio.h>
int search(int arr[], int n, int x)
{
    int i;
    for (i = 0; i < n; i++)
        if (arr[i] == x)
            return i;
    return -1;
}
int main()
{
    int arr[] = { 2, 3, 4, 10, 40 };
    int x;
    scanf("%d",&x);
    int n = sizeof(arr) / sizeof(arr[0]);
    int result = search(arr, n, x);
    if(result==-1){
        printf("Element is not present in array.");
    }
    else{
        printf("Element is present at index %d",result);
    }
    return 0;
}

Time complexity: O(n)
Auxiliary Space: O(1)
*/

/*
2. Binary Search:-
Binary Search is a searching algorithm used in a sorted array by repeatedly dividing the search
interval in half. The idea of binary search is to use the information that the array is sorted and reduce the time
complexity to O(Log n).
    1. Begin with the mid element of the whole array as a search key.
    2. If the value of the search key is equal to the item then return an index of the search key.
    3. Or if the value of the search key is less than the item in the middle of the interval, narrow the interval to the lower half.
    4. Otherwise, narrow it to the upper half.
    5. Repeatedly check from the second point until the value is found or the interval is empty.

#include <stdio.h>
int Binary_search(int arr[], int s, int n, int x)
{
    if (n >= s)
    {
        int mid = s + (n - s) / 2;
        if (arr[mid] == x)
        {
            return mid;
        }
        if (arr[mid] > x)
        {
            return Binary_search(arr, s, mid - 1, x);
        }
        return Binary_search(arr, mid + 1, n, x);
    }
    return -1;
}
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int n = sizeof(arr) / sizeof(arr[0]);
    int x;
    int s = 0;
    printf("Enter Number  ");
    scanf("%d", &x);
    int result = Binary_search(arr, s, n, x);
    if(result==-1){
        printf("ELent is not present in array");
    }
    else{
        printf("Element is present in array at index %d.",result);
    }
    return 0;
}
Time Complexity: O(log n)
Auxiliary Space: O(log n)
*/