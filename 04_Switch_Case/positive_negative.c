#include <stdio.h>
int main()
{
    int num, choice;

    printf("Enter a number: ");
    scanf("%d", &num);

    if(num > 0)
        choice = 1;
    else if(num < 0)
        choice = 2;
    else
        choice = 3;

    switch(choice)
    {
        case 1:
            printf("Positive number");
            break;

        case 2:
            printf("Negative number");
            break;

        case 3:
            printf("Zero");
            break;
    }
    return 0;
}
