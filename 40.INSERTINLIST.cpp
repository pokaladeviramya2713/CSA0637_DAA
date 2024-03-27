#include <stdio.h>
#include <stdlib.h>
void insertNumber(int list[], int *size, int num) {
    int i, j;
    for (i = 0; i < *size; i++) {
        if (list[i] > num)
            break;
    }
    for (j = *size; j > i; j--) {
        list[j] = list[j - 1];
    }
    list[i] = num;
    (*size)++;
}
int main() {
    int list[100], size, num;
    printf("Enter the size of the list: ");
    scanf("%d", &size);
    printf("Enter %d elements in sorted order:\n", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &list[i]);
    }
    printf("Enter the number to insert: ");
    scanf("%d", &num);
    insertNumber(list, &size, num);
    printf("List after insertion:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", list[i]);
    }
    printf("\n");
    return 0;
}

