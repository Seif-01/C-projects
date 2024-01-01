#include <stdio.h>

int main (){
// input first number
double num1;
printf ("Enter first number:\t");
scanf ("%lf", &num1);
// input second number
double num2;
printf ("Enter second number:\t");
scanf ("%lf", &num2);
//display result
double sum = num1 + num2 ;
printf("the result : %.2f\t\n",sum);
    return 0;
}
