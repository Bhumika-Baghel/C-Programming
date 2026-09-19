#include <stdio.h>
int main()
{
    int n, sum, rem;

    printf("Enter a number: ");
    scanf("%d", &n);

    do
    {
        sum = 0;

        do
        {
            rem = n % 10;
            sum = sum + rem;
            n = n / 10;
        } 
        while (n != 0);

        n = sum;

    } 
    while (n >= 10);
    printf("Generic Root = %d", n);

    return 0;
}
