#include <stdio.h>
// Function declaration
void add(int a, int b);

int main()
{
    int num1, num2;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    // Function calling with arguments
    add(num1, num2);

    return 0;
}

// Function definition
void add(int a, int b)
{
    int sum;

    sum = a + b;

    printf("Sum = %d", sum);
}
