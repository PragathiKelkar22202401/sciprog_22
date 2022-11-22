#include<stdio.h>
//Learning to use the printf command to print output to the screen
//Learning different format specifiers used
int main(void){

int i=-95,j=57;           //Declaring variables of different datatypes
float f=95.9894,g=57.1234;

printf("There are two integer types and their values are %d, and %d .\n",i,j);
printf("For float items we can intake the specific number of digits after decimal as desired by using our format specifiers.");
printf(" For example if we want 5 digits after decimal, I can write %.5f and for 2 digit I write %.2f\n",f,g);
printf("If we use wrong datatype then the number might get truncated thus losing data.");

return 0;
}

