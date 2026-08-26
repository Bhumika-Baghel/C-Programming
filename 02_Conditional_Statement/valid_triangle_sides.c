#include<stdio.h>
int main()
{
    int a,b,c;
    
    printf("Enter 1st sides of triangle: ");
    scanf("%d",&a);

    printf("Enter 2nd sides of triangle: ");
    scanf("%d",&b);

    printf("Enter 3rd sides of triangle: ");
    scanf("%d",&c);

    if((a+b>c) && (a+c>b) && (b+c>a))
    {
        printf("Valid Triangle");
    }
    else{
        printf("Invalid Triangle");
    }
    return 0;
}
