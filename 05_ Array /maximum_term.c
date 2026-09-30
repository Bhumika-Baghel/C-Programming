#include <stdio.h>
int main()
{
    int a[5], max = a[0];

    printf("Enter 5 elements:\n");

    for(int i = 0; i < 5; i++)
    {
        scanf("%d", &a[i]);
    }

    max = a[0];
    for(int i = 1; i < 5; i++)
    {
        if(a[i] > max)
        {
            max = a[i];
        }
    }

    printf("Maximum term = %d", max);
    return 0;
}
