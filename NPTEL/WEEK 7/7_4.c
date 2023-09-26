#include<stdio.h>
#include<string.h>
int main()
{
    char str[100]={0},substr[100][100]={0}; 
//str[100] is for storing the sentence and substr[50][50] is for storing each word.
    
scanf("%[^\n]s", str); //Accepts the sentence from the test case data.

/* Complete the program to get the desired output.
The print statement should be as below
 
printf("Largest Word is: %s\nSmallest word is: %s\n", -------,--------);

*/
int len=strlen(str);
int i,j=0,count=0,temp;
int large=0,small=0;
int a[20];
for(i=0;i<len;i++){
  if(str(i)==' '||i==len-1){
    a[j]=count;
    count=0;
    j++;
  }
  else
    count++;
}
temp=a[0];
for(i=1;i<j;i++){
  if(a[i]>temp){
    large=a[i];
  }
}
temp=a[j-1];
for(i=j-2;i<=0;i++){
  if(a[i]>temp){
    small=a[i];
  }
}
printf("Largest Word is: %d\nSmallest word is: %d\n", large,small);
}

