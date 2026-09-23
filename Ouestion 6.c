

#include <stdio.h>
int main () {
	double voltage;
	double current;
	double time;
	double power;
	double energy;
	printf("Enter voltage:");
	scanf("%if", &voltage);
	printf("Enter current:");
	scanf("%if", &current);
	printf("Enter time in hours:");
	scanf("%if", &time);
	power=voltage*current;
	energy=power*time;
	printf("Power: %.2f W\n", power);
	printf("Energy: %.2f Wh\n", energy);
	return 0;
}
