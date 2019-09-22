#include <stdio.h> 

int main(int argc, char *argv[])
{	
	int areas[] = { 10 , 12 , 13 , 14 , 20 };
	char name[] = "Alan";
	/*  Below are two ways to create an array with characters. You can 
	    annoyingly set every letter and space like in 'full_name' or you 
	    can just use double quotes and type out the string like in 
	    "alt_full_name". */
	char full_name[] = {
	'A', 'l', 'a', 'n', ' ', 'R', 'o', 'b', 'l', 'e', 'd', 'o', '\0'
	};
	char alt_full_name[] = "Alan Robledo";
	/* Turns out that different computers will output different values for what 
	   it thinks the size of an int is. Mine says that an int is 4 bytes in size. 
	   For example, the computer would give different values if it was a 32-bit 
	   or a 64-bit. */
	printf("The size of an int: %ld\n", sizeof(int));
	/* Since an int is 4 bytes on my computer, it would take 20 bytes to store 
	   the "areas" array because the array has 5 integers. */
	printf("The size of areas (int[]): %ld\n", sizeof(areas));
	printf("The number of ints in areas: %ld\n", sizeof(areas) / sizeof(int));
	// Arrays are zero indexed like in python, which honestly sucks.
	printf("The first area is %d, the 2nd %d.\n", areas[0], areas[1]);

	printf("The size of a char: %ld\n", sizeof(char));
	printf("The size of name (char[]): %ld\n", sizeof(full_name));
	printf("The number of chars: %ld\n", sizeof(full_name) / sizeof(char));
	printf("My full name is %s.\n", alt_full_name);
	printf("name=\"%s\" and full_name=\"%s\"\n", name, full_name);

	return 0;
}
