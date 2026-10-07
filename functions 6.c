#include <stdio.h>
//function declaration
void displayGrade(float score);
int main(){
	float score;
	printf("Enter your score:");
	scanf("%f", &score);
	//function call
	displayGrade(score);
	return 0;
}
//function definition
void displayGrade(float score)
{
	if(score<0|| score>100){
		printf("Invalid score. Score must be between 0 and 100. \n");
	}
	else if(score >=80){
		printf("Grade = A \n");
	}
	else if(score >= 70){
		printf("Grade = B \n");
	}
	else if(score >= 60){
		printf("Grade = C \n");
	}
	else if(score >= 50){
		printf("Grade = D \n");
	}
	else if(score >= 40){
		printf("Grade = E \n");
	}
	else{
		printf("Grade = F \n");
	}
}
