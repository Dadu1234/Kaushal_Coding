////////////////////////////////////////////////
//CHK WHETHER NUMBER IS HARSHAD OR NOT.
////////////////////////////////////////////////
#include<stdio.h>
void HARSHAD(int);
int main()
{
  int iNumber = 0;
  int iRet = 0;
  
  printf("Enter a number\n");
  scanf("%d",&iNumber);
  
   HARSHAD(iNumber);
  
  return 0;
}
void HARSHAD(int iValue)
{
  int iDigit = 0;
  int iSumDigit = 0;
  int iValue1 = iValue;
  while(iValue>0)
  {
    iDigit = iValue%10;
	iSumDigit = iSumDigit + iDigit;
	iValue = iValue/10;
  }
  printf("Sum is %d\n",iSumDigit);
  if((iValue1%iSumDigit)==0)
  { 
    printf("Number is harshad\n");
  }
  else
  {
    printf("Number is not harshad\n");
  }
}