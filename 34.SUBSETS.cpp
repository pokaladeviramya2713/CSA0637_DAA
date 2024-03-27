#include <stdio.h>
#include <stdbool.h>
#define MAX_SIZE 100
int set[MAX_SIZE];
bool solution[MAX_SIZE];
int n; 
int targetSum;
void printSubset() {
    printf("Subset with the target sum: ");
    for (int i = 0; i < n; i++) {
        if (solution[i])
            printf("%d ", set[i]);
    }
    printf("\n");
}
void subsetSum(int index, int sum) {
    if (sum == targetSum) {
        printSubset();
        return;
    }
    if (index == n || sum > targetSum)
        return;
    solution[index] = true;
    subsetSum(index + 1, sum + set[index]);
    solution[index] = false;
    subsetSum(index + 1, sum);
}
int main() {
    printf("Enter the number of elements in the set: ");
    scanf("%d", &n);
    printf("Enter the elements of the set: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &set[i]);
    }
    printf("Enter the target sum: ");
    scanf("%d", &targetSum);
    subsetSum(0, 0);
    return 0;
}

