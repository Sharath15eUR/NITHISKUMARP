#include<stdio.h>
int main() {
   int upper = 0, lower = 0;
   char ch[100];
   scanf(" %[^\n]s", ch);  /*A word or a sentence is accepted from test case data */

/* Complete the remaining part of the code to store number of uppercase letters
in the variable upper and lowercase letters in variable lower.
The print part of already written. You can declare any variable if necessary */
int i = 0;
   while (ch[i] != '\0') {
      if (ch[i]  >=  'A' && ch[i] <= 'Z')
         upper++;
      if (ch[i]  >=  'a' && ch[i] <= 'z')
         lower++;
      i++;
   }
