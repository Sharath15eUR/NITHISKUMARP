#include <stdio.h>
int main()
{
    int N; 
    scanf("%d",&N); /* An integer number taken as input from test cases */

/*Complete the program by writing the rest of the code in the space provided.
Copy and paste the printf statement given below wherever required to avoid errors.
printf("\n%d is a perfect number.",N);
printf("\n%d is not a perfect number.",N);
*/
int sum=0,i;
for(i=1;i<N;i++){
  if(N%i==0){
    sum=sum+i;
  }
}
if(sum ==N){
  printf("%d is a perfect number.",N);
}
else{
printf("%d is not a perfect number.",N);
}
}
