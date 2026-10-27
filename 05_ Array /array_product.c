#include <stdio.h>
int main()
{
    int a[5], i, product = 1;

    printf("Enter 5 elements: ");
    for(i = 0; i < 5; i++)
    {
        scanf("%d", &a[i]);
    }

    for(i = 0; i < 5; i++)
    {
        product = product * a[i];
    }

    printf("Product = %d", product);

    return 0;
}
