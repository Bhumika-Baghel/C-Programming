#include <stdio.h>
int main()
{
    int n, original, rev = 0, rem;

    printf("Enter number: ");
    scanf("%d", &n);

    original = n;

    do
    {
        rem = n % 10;
        rev = rev * 10 + rem;
        n = n / 10;
    } 
    while (n != 0);
    if (original == rev)
        printf("Palindrome Number");
    else
        printf("Not a Palindrome Number");

    return 0;
}
