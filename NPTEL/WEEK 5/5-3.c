#include <stdio.h>
int main()
{
    int N;
    scanf("%d",&N); /* The value of N is taken from the test case data */
 
/* Complete the code.
Use the printf statements as below
printf("%d is a number that can be expressed as power of 2.",N);
printf("%d cannot be expressed as power of 2.",N);
*/
int k=N;
while(k>=0){
  if(k%2==0){
    k=k/2;
    if(k==1){
      printf("%d is a number that can be expressed as power of 2.",N);
      break;
    }
  }
  else{
    printf("%d cannot be expressed as power of 2.",N);
    break;
  }
}
}
