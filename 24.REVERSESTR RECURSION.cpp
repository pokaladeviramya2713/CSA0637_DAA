#include <stdio.h>
int reverse(int num) {
    static int rev = 0;
    if (num == 0)
        return 0;
    rev = rev * 10 + num % 10;
    reverse(num / 10);
    return rev;
}
int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("Reverse of %d is %d\n", num, reverse(num));
    return 0;
}

