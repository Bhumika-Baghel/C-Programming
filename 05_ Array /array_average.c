#include <stdio.h>
int main()
{
    int arr[5], i, sum = 0;
    float avg;

    printf("Enter 5 elements:\n");

    for (i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
        sum = sum + arr[i];
    }

    avg = sum / 5.0;

    printf("Average = %f", avg);

    return 0;
}
