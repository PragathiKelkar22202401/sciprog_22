#include <stdio.h>
//Program to enter input from user
int main(void) {

  int i,inpt,flag = 0;
  double a;
// Enter information from user
   while(flag != 3){		       //Setting counter to exit loop at 3rd failed attempt
   printf("Enter an int and double\n");
   inpt = scanf("%d %lf",&i,&a);       //return type here will be number of variables read in, here 2
   if(inpt == 2)
   {flag = 3;             //exit the loop
    printf("Successfully read\n");
   }
   if(inpt != 2)
   {
     printf("Error in read statement, please try again\n");
     flag = flag+1;
   }
  }
return 0;
}

