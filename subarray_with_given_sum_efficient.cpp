/*  Algorithm:-
Create two variables, l=0, sum = 0
Traverse the array from start to end.
Update the variable sum by adding current element, sum = sum + array[i]
If the sum is greater than the given sum, update the variable sum as sum = sum – array[l], and update l as, l++.
If the sum is equal to given sum, print the subarray and break the loop.*/
#include <stdio.h>
int subArraySum(int arr[], int n, int sum)
{
	int curr_sum = arr[0], start = 0, i;
	for (i = 1; i <= n; i++) {
		while (curr_sum > sum && start < i - 1) {
			curr_sum = curr_sum - arr[start];
			start++;
		}
		if (curr_sum == sum) {
			printf(
				"Sum found between indexes %d and %d",
				start, i - 1);
			return 1;
		}
		if (i < n)
			curr_sum = curr_sum + arr[i];
	}
	printf("No subarray found");
	return 0;
}
int main()
{
	int arr[] = { 15, 2, 4, 8, 9, 5, 10, 23 };
	int n = sizeof(arr) / sizeof(arr[0]);
	int sum = 23;
	subArraySum(arr, n, sum);
	return 0;
}
