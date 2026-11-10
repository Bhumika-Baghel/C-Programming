#include <stdio.h>
int main()
{
    int a[100], n, i, count = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter array elements: ");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    for(i = 0; i < n; i++)
    {
        if(a[i] < 0)
        {
            count++;
        }
    }

    printf("Total negative elements = %d", count);

    return 0;
}
