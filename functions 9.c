#include <stdio.h>

// FUNCTION DECLARATION
int findLargest(int a, int b, int c);

int main()
{
    int a, b, c;
    int largest;

    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    // FUNCTION CALL
    largest = findLargest(a, b, c);

    printf("The largest number is: %d\n", largest);

    return 0;
}

// FUNCTION DEFINITION
int findLargest(int a, int b, int c)
{
    int largest;

    largest = a;

    if (b > largest)
    {
        largest = b;
    }

    if (c > largest)
    {
        largest = c;
    }

    return largest;
}
