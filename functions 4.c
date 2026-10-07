#include <stdio.h>
//function declaration 
void checkEvenOdd(int number);
int main(){
	int number;
	printf("Enter a number:");
	scanf("%d", &number);
	//funtion call
	checkEvenOdd(number);
	return 0;
}
//function definitions
void checkEvenOdd(int number)
{
	if (number % 2 == 0)
	{
		printf("%d is an even number. \n", number);
	}
	else
	{
		printf("%d is an odd number. \n", number);
	}
	}

