#include <stdio.h>

int factorial(int n);          // Prototype of function 1
int ncr(int n, int r);         // Prototype of function 2

int main()
{
    int n;
    int r;

    printf("Enter n: ");
    scanf("%d", &n);

    printf("Enter r: ");
    scanf("%d", &r);

    if (n < 0 || r > n || r < 0)
    {
        printf("Invalid input\n");
    }
    else
    {
        printf("%dC%d = %d\n", n, r, ncr(n, r));
    }

    return 0;
}

// Function 1: Calculate factorial
int factorial(int n)
{
    int F = 1;

    for (int i = 1; i <= n; i++)
    {
        F *= i;
    }

    return F;
}

// Function 2: Calculate nCr
int ncr(int n, int r)
{
    return factorial(n) / (factorial(r) * factorial(n - r));
}