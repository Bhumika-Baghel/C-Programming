#include <stdio.h>
int main()
{
    int a[5], i, count = 0;

    printf("Enter 5 elements: ");
    for(i = 0; i < 5; i++)
    {
        scanf("%d", &a[i]);
    }

    for(i = 0; i < 5; i++)
    {
        if(a[i] >= 10 && a[i] <= 50)
        {
            count++;
        }
    }

    printf("Elements between 10 and 50 = %d", count);

    return 0;
}
