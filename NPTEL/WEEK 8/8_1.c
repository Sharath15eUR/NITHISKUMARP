#include<stdio.h>
int HCF(int, int); //You have to write this function which calculates the HCF. 
	 
int main()
{
   int a, b, c, d, result;
   scanf("%d %d %d %d", &a, &b, &c, &d); /* Takes 4 number as input from the test data */
   result = HCF(HCF(a, b), HCF(c,d));
   printf("The HCF is %d", result);
}

//Complete the rest of the program to calculate HCF
int HCF(int a,int b){
  int hcf,i;
  int min=(a<b)?a:b;
  if(a==min)
    if(min==0)
      return b;
    else
      return HCF(a,b%a);
  else
    if(min==0)
      return a;
    else
      return HCF(b,a%b);  
}
