/* Compile with "make helloWorld" to get 
   an executable with the same name */
// Compile with "gcc helloWorld.c" to get an executable called a.out 
// /* and */ is for multi-line commenting 
# include <stdio.h>
// You start the block of the main function with a { and end it with a } 
/* The OS loads the program and runs the function main. The function needs 
   to return an int as an exit status to the OS. Hence why we use "int main()".
   In this case, "return 0" is how we are returning an exit status. */
  int main(){
  printf("Hello World!\n");
  return 0;
}
