#include <stdio.h>
//function declaration
float calculateAverage(float score1, float score2, float score3);
int main(){
	float score1, score2, score3, average;
	printf("Enter first score:");
	scanf("%f", &score1);
	printf("Enter second score:");
	scanf("%f", &score2);
	printf("Enter third score:");
	scanf("%f", &score3);
	//function call
	calculateAverage(score1, score2, score3);
	printf("Average Score =%.2f\n", average);
	return 0;
}
//function definition
float calculateAverage(float score1, float score2, float score3){
return (score1 + score2 + score3);}
