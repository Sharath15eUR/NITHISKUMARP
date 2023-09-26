#include<stdio.h>
int main()
{
int N;
float sum = 0.0;
scanf("%d",&N); /*Read the value of N from test cases provided*/

/* Complete the program. Please use the printf statement given below:

printf("Sum of the series is: %.2f\n",sum);

*/
float i;
float x;
for(i=1;i<=N;i++){
  x=1/(float)i;
  sum=sum+x;
}

printf("Sum of the series is: %.2f",sum);

}
