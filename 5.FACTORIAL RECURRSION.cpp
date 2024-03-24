#include <stdio.h>
unsigned long long factorial(int n)
{
    if (n == 0 || n == 1)
        return 1;
    return n * factorial(n - 1);
}

int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    unsigned long long fact = factorial(num);
    printf("Factorial of %d is %llu\n", num, fact);

    return 0;
}

