#include <stdio.h>

// FUNCTION DECLARATIONS
int calculateTotal(int mathematics, int electronics);
float calculateAverage(int total);
void displayGrade(float average);
void displayPassFail(float average);

int main()
{
    int mathematics, electronics;
    int total;
    float average;

    printf("Enter Mathematics score: ");
    scanf("%d", &mathematics);

    printf("Enter Electronics score: ");
    scanf("%d", &electronics);

    // FUNCTION CALL
    total = calculateTotal(mathematics, electronics);

    // FUNCTION CALL
    average = calculateAverage(total);

    printf("\n--- STUDENT EXAMINATION RESULT ---\n");
    printf("Mathematics: %d\n", mathematics);
    printf("Electronics: %d\n", electronics);
    printf("Total: %d\n", total);
    printf("Average: %.2f\n", average);

    // FUNCTION CALL
    displayGrade(average);

    // FUNCTION CALL
    displayPassFail(average);

    return 0;
}

// FUNCTION DEFINITIONS

int calculateTotal(int mathematics, int electronics)
{
    return mathematics + electronics;
}

float calculateAverage(int total)
{
    return total / 2.0;
}

void displayGrade(float average)
{
    if (average >= 80)
    {
        printf("Grade: A\n");
    }
    else if (average >= 70)
    {
        printf("Grade: B\n");
    }
    else if (average >= 60)
    {
        printf("Grade: C\n");
    }
    else if (average >= 50)
    {
        printf("Grade: D\n");
    }
    else
    {
        printf("Grade: F\n");
    }
}

void displayPassFail(float average)
{
    if (average >= 50)
    {
        printf("Status: PASS\n");
    }
    else
    {
        printf("Status: FAIL\n");
    }
}
