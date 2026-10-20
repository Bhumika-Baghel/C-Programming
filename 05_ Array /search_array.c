#include <stdio.h>
int main()
{
    int arr[5], i, num, found = 0;

    printf("Enter 5 elements:\n");

    for (i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter element to search: ");
    scanf("%d", &num);

    for (i = 0; i < 5; i++)
    {
        if (arr[i] == num)
        {
            found = 1;
            break;
        }
    }

    if (found == 1)
        printf("Element found");
    else
        printf("Element not found");

    return 0;
}
