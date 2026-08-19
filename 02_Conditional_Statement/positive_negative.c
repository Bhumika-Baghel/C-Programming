#include<stdio.h>
int main()
{
    int num;

    printf("enter a number: ");
    scanf("%d",&num);

    if(num>0)
    {
        printf("It is a positive number");
    }
    else if(num==0)
    {
        printf("It is zero");
    }
    else{
        printf("It is a negative number");
    }
}
