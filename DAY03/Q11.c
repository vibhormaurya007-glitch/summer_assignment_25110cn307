// Write a program to Find GCD of two numbers.
#include <stdio.h>
int main()
{
    int n1, n2,gcd;
    printf("enter two first number:");
    scanf("%d", &n1);
    printf("enter two second number:");
    scanf("%d", &n2);

    printf("factors of %d:", n1);
    for (int i = 1; i <= n1; i++)
    {
        if (n1 % i == 0)
        {
            printf("%d ", i);
        }
    }
    printf("\n");
    printf("factors of %d:", n2);
    for (int i = 1; i <= n2; i++)
    {
        if (n2 % i == 0)
        {
            printf("%d ", i);
        }
    }
    printf("\n");
    printf("common factor:");
    for (int i = 1; i <= n1 && i <= n2; i++)
    {
        if (n1 % i == 0 && n2 % i == 0)
        {
            printf("%d ", i);
            gcd=i;
        }
    }
    printf("\n");
    printf("GCD=%d",gcd);
}