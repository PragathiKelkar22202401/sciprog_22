#include<stdio.h>
#include<stdlib.h>
//Program to generate Fibonacci Series upto n
void fibo(int *a,int *b);

int main(void){
  int f0 = 0,f1=1;  //Initialising first two numbers of fibonacci series
  int n;            //To read in how many terms we want
  int terms,i;
  printf("Enter the number of terms to be printed:(n>0) \n ");
  terms = scanf("%d",&n);
  if ((terms != 1)||n<1)
     {
      printf("\nA Please enter a positive Integer.\nBye\n");
      exit(1);
     }
   printf("Fibonacci series upto given terms is %d, %d, ",f0,f1);
   for(i=2;i<n;i=i+1)
      {
	fibo(&f0,&f1);
        printf("%d",f1);
	if(i!=n-1) printf(", ");
        if(i==n-1) printf("\n\n");        //So that we don't have ',' after last term
        if(i%10==0) printf("\n");       //To break the line after 10 terms
      }

return 0;
}
void fibo(int *a,int *b)   //passing by reference and not by value since we want to change the variables permanently
{
int next;		   //need temporary variable for swapping values
next = *a + *b;
*a = *b;
*b = next;
}
