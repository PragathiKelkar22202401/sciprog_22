#include<stdio.h>
#include<math.h>
//Program to find the area by trapezoidal rule using function and array

float deg_to_rad(float deg){		        //converts degrees to radian and returns radian
return (deg*M_PI)/180.0;}

float trap_rule(int N, float func_array[N+1]){      //returns the area under the curve using trapezoidal rule
int i;
float area;
area = func_array[0] + func_array[N];

for(i=1;i<N;i++){
area += 2*func_array[i];
}

area = (deg_to_rad(60)/(2*N))*area;            //formula using a = 0 and b = radian(60 deg)
printf("\nThe approx area is %f and the exact area is %f\n",area,log(2.0));

return area;
}

int main(void){                                 //Since our functions are written before main() we don't need to declare them
int i,N =12;
float arr[N+1];					//array has 13 blocks as we include our elements from x0 to x12
for (i=0;i<=12;i++) arr[i] = tan(deg_to_rad(5*i));
trap_rule(N, arr);				// has return value of the approximated area, which can be further used
return 0;
}
