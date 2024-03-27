#include <stdio.h>
#define MAX_ITEMS 100
int knapsack(int capacity, int weights[], int values[], int n) {
    int dp[n + 1][capacity + 1];
    for (int i = 0; i <= n; i++) {
        for (int w = 0; w <= capacity; w++) {
            if (i == 0 || w == 0)
                dp[i][w] = 0;
            else if (weights[i - 1] <= w)
                dp[i][w] = (values[i - 1] + dp[i - 1][w - weights[i - 1]] > dp[i - 1][w]) ? 
                           (values[i - 1] + dp[i - 1][w - weights[i - 1]]) : dp[i - 1][w];
            else
                dp[i][w] = dp[i - 1][w];
        }
    }
    return dp[n][capacity];
}
int main() {
    int capacity, n;
    printf("Enter the capacity of the knapsack: ");
    scanf("%d", &capacity);
    printf("Enter the number of items: ");
    scanf("%d", &n);
    int weights[MAX_ITEMS], values[MAX_ITEMS];
    printf("Enter the weights and values of items:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d %d", &weights[i], &values[i]);
    }
    int optimalCost = knapsack(capacity, weights, values, n);
    printf("Optimal cost: %d\n", optimalCost);
    return 0;
}

