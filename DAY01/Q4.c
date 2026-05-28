//Write a program to Count digits in a number

#include <stdio.h>

int main() {
    int n,count=0;
    printf("enter number:");
    scanf("%d",&n);
    while(n>0)
    {
        int temp=n%10;
        n=n/10;
        count++;
    }
    printf("total number of digits:%d",count);
    return 0;
}