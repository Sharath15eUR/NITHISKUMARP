#include<stdio.h>
 
int main() 
{
   int array[50], i, size;
 
   scanf("%d", &size); /*Accepts the size of array from test case data */

   for (i = 0; i < size; i++)
   scanf("%d", &array[i]); /* Read the array elements from the test case data */
   int temp=0,j,k;
for(i=0;i<size;i++){
  temp=array[i];
  for(j=i+1;j<size;j++){
    if(array[i]==array[j]){
      k=j;
      while(k<=size-2){
        array[k]=array[k+1];
        k++;
      }
      size--;
    }
  }
}
for (i = 0; i < size; i++) {
      printf("%d\n", array[i]);
   }

}
