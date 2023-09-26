#include<stdio.h>
 
int main() {
   int arr[20], i, n;
 
   scanf("%d", &n); /* Accepts the number of elements in the array */

  for (i = 0; i < n; i++) 
     scanf("%d", &arr[i]); /*Accepts the elements of the array */
int temp=0;
for(i=0;i<n/2;i++){
  temp=arr[i];
  arr[i]=arr[n-1-i];
  arr[n-1-i]=temp;
}
