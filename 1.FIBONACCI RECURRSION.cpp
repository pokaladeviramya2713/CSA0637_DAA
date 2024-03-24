#include <stdio.h>

int power(int base, int exponent) {
    if (exponent == 0)
        return 1;
    return base * power(base, exponent - 1);
}

int countDigits(int num) {
    if (num == 0)
        return 0;
    return 1 + countDigits(num / 10);
}

int isArmstrong(int num, int originalNum) {
    if (num == 0)
        return 0;
    return power(num % 10, countDigits(originalNum)) + isArmstrong(num / 10, originalNum);
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (isArmstrong(num, num) == num)
        printf("%d is an Armstrong number.\n", num);
    else
        printf("%d is not an Armstrong number.\n", num);

    return 0;
}

