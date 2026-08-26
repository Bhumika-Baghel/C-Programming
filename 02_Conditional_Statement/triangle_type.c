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

    if( a==b && b==c )
    {
        printf("Equilateral Triangle");
    }
    else if( a==b || b==c || a==c)
    {
        printf("Isosceles Triangle");
    }
    else
    {
        printf("Scalene Triangle");
    }
    return 0;
}
