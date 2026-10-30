#include <stdio.h>
int main()
{
    int a[5], i;

    printf("Enter 5 elements: ");
    for(i = 0; i < 5; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Cube of elements: ");
    for(i = 0; i < 5; i++)
    {
        printf("%d ", a[i] * a[i] * a[i]);
    }

    return 0;
}
