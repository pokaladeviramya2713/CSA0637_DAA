#include <stdio.h>
#include <stdlib.h>
#define MAX_ITEMS 100
#define CONTAINER_CAPACITY 10
typedef struct {
    int id; 
    int size;
} Item;
int loadContainers(Item items[], int n, int containerCapacity) {
    int containerCount = 0;
    int currentContainerLoad = 0;
    for (int i = 0; i < n; i++) {
        if (currentContainerLoad + items[i].size <= containerCapacity) {
            printf("Item %d packed into container %d\n", items[i].id, containerCount + 1);
            currentContainerLoad += items[i].size;
        } else {
            containerCount++;
            printf("Container %d is full.\n", containerCount);
            currentContainerLoad = items[i].size; 
            printf("Item %d packed into container %d\n", items[i].id, containerCount + 1);
        }
    }
   return containerCount + 1; 
}
int main() {
    Item items[MAX_ITEMS];
    int numItems;
    printf("Enter the number of items: ");
    scanf("%d", &numItems);
    printf("Enter the sizes of items:\n");
    for (int i = 0; i < numItems; i++) {
        printf("Size of item %d: ", i + 1);
        scanf("%d", &items[i].size);
        items[i].id = i + 1; 
    }
    printf("Container loading:\n");
    int numContainers = loadContainers(items, numItems, CONTAINER_CAPACITY);
    printf("Total number of containers used: %d\n", numContainers);
    return 0;
}

