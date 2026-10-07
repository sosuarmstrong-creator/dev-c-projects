#include <stdio.h>

// FUNCTION DECLARATION
void multiplicationTable(int number);

int main()
{
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    // FUNCTION CALL
    multiplicationTable(number);

    return 0;
}

// FUNCTION DEFINITION
void multiplicationTable(int number)
{
    int i;

    for (i = 1; i <= 12; i++)
    {
        printf("%d x %d = %d\n", number, i, number * i);
    }
}
