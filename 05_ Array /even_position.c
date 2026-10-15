#include <stdio.h>
int main()
{
    int a[5], i;

    printf("Enter 5 elements:\n");

    for(i = 0; i < 5; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Elements at even positions: ");

    for(i = 1; i < 5; i = i + 2)
    {
        printf("%d ", a[i]);
    }

    return 0;
}
