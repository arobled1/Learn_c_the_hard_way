/* If a value is not assigned to a variable like "age" or "height", the program will still 
   compile but running the executable will still print out some random large number instead 
   of throwing an error. Watch out for that. */

#include <stdio.h>

int main()
{
	int age = 20;
	int height = 72;

/* Printing variables is very similar as in Python with the only difference being 
   that you don't need to add a percent sign in front of the variable name. */

	printf("I am %d years old.\n", age);
	printf("I am %d inches tall.\n", height);
// Another obvious difference is using printf() instead of print() 
	return 0;
}
