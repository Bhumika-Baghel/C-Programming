#include <stdio.h>
// Function Declaration
int add(int, int);
int main()
{
    int result;
    // Function Calling
    result = add(10, 20);
    printf("Sum = %d", result);
    return 0;
}
// Function Definition
int add(int a, int b)
{
    return a + b;
}
