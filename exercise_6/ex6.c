#include <stdio.h>

int main(int argc, char *argv[])
{
	int distance = 100;
	float power = 2.345f;
	double super_power = 56789.4532;
	char initial = 'A';
	char first_name[] = "Alan";
	char last_name[] = "Robledo";
	
	printf("You are %d miles away.\n", distance);
	printf("You have %f levels of power.\n", power);
	printf("You have %f awesome super powers.\n", super_power);
	printf("I have a first name %s.\n", first_name);
	printf("I have a last name %s.\n", last_name);
	printf("My whole name is %s %s.\n \n", first_name, last_name);

	printf("This is an integer %d.\n", distance);
	printf("This is a float %f.\n", super_power);
	printf("This is a one letter character %c.\n", initial);
	printf("This is a string %s.\n", first_name);

	return 0;
}
