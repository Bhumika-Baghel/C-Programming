#include <stdio.h>
int main()
{
    int a[5], min;

    printf("Enter 5 elements:\n");

    for(int i = 0; i < 5; i++)
    {
        scanf("%d", &a[i]);
    }

    min = a[0];

    for(int i = 1; i < 5; i++)
    {
        if(a[i] < min)
        {
            min = a[i];
        }
    }

    printf("Minimum term = %d", min);
    return 0;
}
