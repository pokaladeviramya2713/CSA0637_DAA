#include <stdio.h>
void findMinMax(int arr[], int size) 
{
    if (size == 0) 
	{
        printf("The list is empty.\n");
        return;
    }

    int minVal = arr[0];
    int maxVal = arr[0];

    for (int i = 1; i < size; i++) 
	{
        if (arr[i] < minVal) 
		{
            minVal = arr[i];
        }
        if (arr[i] > maxVal) 
		{
            maxVal = arr[i];
        }
    }

    printf("Minimum value: %d\n", minVal);
    printf("Maximum value: %d\n", maxVal);
}

int main() {
    int arr[] = {10, 5, 8, 3, 12, 7};
    int size = sizeof(arr) / sizeof(arr[0]);

    findMinMax(arr, size);

    return 0;
}

