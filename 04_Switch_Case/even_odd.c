#include <stdio.h>
int main()
{
    int num, choice;

    printf("Enter a number: ");
    scanf("%d", &num);

    choice = num % 2;

    switch(choice)
    {
        case 0:
            printf("Even number");
            break;

        default:
            printf("Odd number");
    }
    return 0;
}
