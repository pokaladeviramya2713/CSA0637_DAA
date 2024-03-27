#include <stdio.h>
#include <limits.h>
#define N 4
int minCost(int costMatrix[N][N], int assigned[N], int visited[N], int worker, int cost, int level) {
    if (level == N) {
        return cost;
    }
    int min = INT_MAX;
    for (int task = 0; task < N; task++) {
        if (!visited[task]) {
            visited[task] = 1;
            assigned[level] = task;
            int newCost = cost + costMatrix[worker][task];
            int newMin = minCost(costMatrix, assigned, visited, worker + 1, newCost, level + 1);
            if (newMin < min) {
                min = newMin;
            }
            visited[task] = 0;
        }
    }
    return min;
}
int solveAssignment(int costMatrix[N][N]) {
    int assigned[N];
    int visited[N] = {0};
    return minCost(costMatrix, assigned, visited, 0, 0, 0);
}
int main() {
    int costMatrix[N][N];
    printf("Enter the cost matrix (%dx%d):\n", N, N);
    for (int i = 0; i < N; i++) {
        printf("Enter costs for worker %d:\n", i + 1);
        for (int j = 0; j < N; j++) {
            scanf("%d", &costMatrix[i][j]);
        }
    }
    int minCost = solveAssignment(costMatrix);
    printf("Minimum cost of assignment: %d\n", minCost);
    return 0;
}

