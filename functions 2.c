#include <stdio.h>
//funtion declaration
int add(int a, int b);
int main(){
	int num1, num2, sum;
	printf("Enter first number:");
	scanf("%d", &num1);
	printf("Enter second number:");
	scanf("%d", &num2);
	//calling the function
	sum = add(num1, num2);
	printf("Sum = %d\n", sum);
	return 0;}
	//funtion definiton
	int add(int a, int b)
	{
		return a + b;
	}

