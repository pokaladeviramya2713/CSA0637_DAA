#include <stdio.h>
void findMaxMin(int arr[], int left, int right, int *maxVal, int *minVal) 
{
    if (left == right) 
	{
        *maxVal = *minVal = arr[left]; 
        return;
    }

    int mid = (left + right) / 2;
    int maxLeft, minLeft, maxRight, minRight;

    findMaxMin(arr, left, mid, &maxLeft, &minLeft);
    findMaxMin(arr, mid + 1, right, &maxRight, &minRight);

    *maxVal = (maxLeft > maxRight) ? maxLeft : maxRight;
    *minVal = (minLeft < minRight) ? minLeft : minRight;
}

int main() 
{
    int arr[] = {10, 5, 8, 3, 12, 7};
    int size = sizeof(arr) / sizeof(arr[0]);

    int maxVal, minVal;
    findMaxMin(arr, 0, size - 1, &maxVal, &minVal);

    printf("Maximum value: %d\n", maxVal);
    printf("Minimum value: %d\n", minVal);

    return 0;
}

