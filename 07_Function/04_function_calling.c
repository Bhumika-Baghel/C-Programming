#include <stdio.h>
// Function Declaration
void display();
// Main Function
int main()
{
    printf("Function Calling Example\n");

    // First Function Call
    display();

    // Second Function Call
    display();

    // Third Function Call
    display();

    return 0;
}
// Function Definition
void display()
{
    printf("Hello from the display function!\n");
}
