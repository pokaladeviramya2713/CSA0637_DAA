#include <stdio.h>
void generate_pascals_triangle(int n) 
{
    int triangle[n][n];
    for (int i = 0; i < n; i++) 
	{
        triangle[i][0] = 1; 
        for (int j = 1; j < i; j++) 
		{
            triangle[i][j] = triangle[i - 1][j - 1] + triangle[i - 1][j];
        }
        triangle[i][i] = 1;
    }
    for (int i = 0; i < n; i++) 
	{
        for (int j = 0; j <= i; j++) 
		{
            printf("%d ", triangle[i][j]);
        }
        printf("\n");
    }
}
int main() 
{
    int n = 5;
    generate_pascals_triangle(n);
    return 0;
}

