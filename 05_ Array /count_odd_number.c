#include <stdio.h>
int main()
{
    int a[5], b[5], i, count = 0;

    printf("Enter 5 elements:\n");

    for(i = 0; i < 5; i++)
    {
        scanf("%d", &a[i]);
    }

    for(i = 0; i < 5; i++)
    {
        b[i] = a[i];
    }

    for(i = 0; i < 5; i++)
    {
        if(a[i] % 2 != 0)
        {
            count++;
        }
    }

    printf("\n\nOdd elements = %d\n", count);

    return 0;
}
