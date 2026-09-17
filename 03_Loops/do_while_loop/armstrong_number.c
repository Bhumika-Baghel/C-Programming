#include <stdio.h>
int main()
{
    int n, original, rem, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    original = n;

    do
    {
        rem = n % 10;
        sum = sum + rem * rem * rem;
        n = n / 10;
    } 
    while (n != 0);
        if (sum == original)
            printf("Armstrong Number");
        else
            printf("Not an Armstrong Number");

    return 0;
}
