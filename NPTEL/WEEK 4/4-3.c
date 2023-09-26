#include<stdio.h>
void main()
{
    int n;
    long int fact;  /* n is the number whose factorial we have to find and fact is the factorial */
    scanf("%d",&n);  /* The value of n is taken from test cases */

/* complete the program. Use the printf statements in the format mentioned below 
to match your output exactly with output test cases 

printf("The Factorial of %d is : %ld",n,fact);

You can declare any other variables if required */
fact=1;
int a=n;
while(n!=0){
  fact=fact*n;
  n=n-1;
}
printf("The Factorial of %d is : %ld",a,fact);

}
