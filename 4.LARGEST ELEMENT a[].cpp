#include <stdio.h>
int findLargest(int arr[], int size)
{
    if (size == 1)
        return arr[0];
    int max = findLargest(arr, size - 1);
    return (arr[size - 1] > max) ? arr[size - 1] : max;
}
int main()
{
    int arr[] = {10, 5, 7, 25, 18, 30};
    int size = sizeof(arr) / sizeof(arr[0]);

    int largest = findLargest(arr, size);
    printf("The largest number in the array is: %d\n", largest);

    return 0;
}

