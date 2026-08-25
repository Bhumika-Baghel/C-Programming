#include<stdio.h>
int main()
{
    // take 3 number input and tell if they can be angle of a triangle
    int a,b,c;
    printf("Enter the 1st angle:");
    scanf("%d",&a);
     printf("Enter the 2nd angle:");
    scanf("%d",&b);
     printf("Enter the 3rd angle:");
    scanf("%d",&c);
      // int sum=a+b+c;
    if(a > 0 && b > 0 && c > 0 && (a + b + c == 180))
    {
        printf("Valid Triangle");
    }
    else{
        printf("Invalid Triangle");
    }
    return 0;
}
