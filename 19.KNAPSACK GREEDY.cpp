#include<stdio.h>
#include<stdlib.h>
struct Item {
    int value;
    int weight;
};
int compare(const void *a, const void *b) {
    double ratio1 = (double)(((struct Item *)a)->value) / (((struct Item *)a)->weight);
    double ratio2 = (double)(((struct Item *)b)->value) / (((struct Item *)b)->weight);
    if (ratio1 < ratio2)
        return 1;
    else if (ratio1 > ratio2)
        return -1;
    else
        return 0;
}
double fractionalKnapsack(int W, struct Item arr[], int n) {
    qsort(arr, n, sizeof(arr[0]), compare);
    double totalValue = 0.0; 
    for (int i = 0; i < n; i++) {
        if (arr[i].weight <= W) {
            totalValue += arr[i].value;
            W -= arr[i].weight;
        } else {
            totalValue += arr[i].value * ((double)W / arr[i].weight);
            break;
        }
    }
    return totalValue;
}
int main() {
    int W = 50;
    struct Item arr[] = {{60, 10}, {100, 20}, {120, 30}};
    int n = sizeof(arr) / sizeof(arr[0]);
    double max_value = fractionalKnapsack(W, arr, n);
    printf("Maximum value obtained from fractional knapsack is: %0.2f\n", max_value);
    return 0;
}

