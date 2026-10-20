#include <stdio.h>
int main()
{
    int arr[5], i;

    printf("Enter 5 elements:\n");

    for (i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Elements at even indexes:\n");

    for (i = 0; i < 5; i++)
    {
        if (i % 2 == 0)
        {
            printf("%d ", arr[i]);
        }
    }

    return 0;
}
