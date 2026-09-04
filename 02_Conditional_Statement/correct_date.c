#include<stdio.h>
int main()
{
    int Date, Month, Year;

    printf("Enter Date: ");
    scanf("%d",&Date);

    printf("Enter Month: ");
    scanf("%d",&Month);

    printf("Enter Year: ");
    scanf("%d",&Year);

    if( Month < 1 || Month > 12)
        printf("Month is incorrect !");

    else if( Date < 1 )
        printf("Date is incorrect !");

    else if(Month == 2)
        {
            if ((Year % 400 == 0) || (Year % 4 == 0 && Year % 100 != 0))
            {
                if (Date <= 29)
                    printf("Valid Date");
                else
                    printf("February in leap year has only 29 days.");
            }
            else
            {
                if (Date <= 28)
                    printf("Valid Date");
                else
                    printf("February has only 28 days.");
            }
        }

    else if (Month == 4 || Month == 6 || Month == 9 || Month == 11)
    {
        if (Date <= 30)
            printf("Valid Date");
        else
            printf("Month has only 30 days.");
    }

    else
    {
        if (Date <= 31)
            printf("Valid Date");
        else
            printf("Month has only 31 days.");
    }

    return 0;
}
