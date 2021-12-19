#include<stdio.h>
int main()
{
 int iNumber = 0;
 int CountFive = 0;
 int CountOne = 0;
 int CountTwo = 0;
 int iRes = 0;
 printf("Enter a number\n");
 scanf("%d",&iNumber);
 
 CountFive = (iNumber-4)/5;
 
 printf("The number 5's in %d is %d\n",iNumber,CountFive);
 
 if((iNumber-5*CountFive)%2==0)
 {
   printf("The number of 1's in %d is 2\n",iNumber);
 }
 else
 {
   printf("The number of 1's in %d is 1\n",iNumber);
 }
 
 iRes = (5*(CountFive)) + (CountOne);
 printf("%d",iRes);
 
 //printf("The number of 2's in %d is %d\n",iNumber,CountTwo);
 
 return 0;
}