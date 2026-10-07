#include <stdio.h>
//function declaration
void checkEligibility(int age);
int main () {
	int age;
	printf("Enter age:");
	scanf("%d", &age);
	//function call
	checkEligibility(age);
	return 0;
}
//function definition
void checkEligibility(int age){

if (age >= 18){
	printf("You are eligible to vote. \n");}
	else{
		printf("You are not eligible to vote. \n");
	}
}
