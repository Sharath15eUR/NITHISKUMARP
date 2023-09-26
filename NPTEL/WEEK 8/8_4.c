#include<stdio.h>
#include<string.h>

void reverse(char[], int, int);
    int main()
    {
        char str1[20];
        scanf("%s", str1); //The string is taken as input form the test data. 
     
/* Complete the program to print the string in reverse order using the function
void reverse(char[], int, int);
Use the printf statement as
printf("The string after reversing is: %s\n", str1); 
You can use different variable also.
*/
int len= strlen(str1);
int j=len-1;
reverse(str1,len,j );
}
void reverse(char str1[], int len,int j ){
  int i;
  char temp;
  for(i=0;i<len/2;i++){
    temp = str1[i];
    str1[i]=str1[j];
    str1[j]=temp;
    printf("%c",str1[j]);
	j--;
}
  printf("The string after reversing is: %s\n", str1);
}
