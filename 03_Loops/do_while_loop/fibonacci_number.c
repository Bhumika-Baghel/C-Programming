#include <stdio.h>
int main()
{
    int n, i = 1;
    int a = 0, b = 1, c;

    printf("Enter number of terms: ");
    scanf("%d", &n);

    do
    {
        printf("%d ", a);

        c = a + b;
        a = b;
        b = c;

        i++;
    } 
    while (i <= n);

    return 0;
}
