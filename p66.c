#include<stdio.h>
#include<stdbool.h>
bool ChkStrong(int);
int Factorial(int);
int main()
{
  int iNumber = 0;
  bool bRet = false;
  
  printf("Enter a number\n");
  scanf("%d",&iNumber);
  
  bRet = ChkStrong(iNumber); 
  
  if(bRet==true)
  { 
    printf("Number is strong\n");
  }
  else
  {
    printf("Number is not strong\n");
  }
  
  return 0;
}
bool ChkStrong(int iValue)
{
  int iDigit = 0;
  int iSumFact = 0;
  while(iValue!=0)
  {
    iDigit = iValue%10;
	iSumFact = iSumFact + Factorial(iDigit);
	iValue = iValue/10;
  }
  printf("Sum of factorials of a number is %d\n",iSumFact);
  if(iSumFact==iValue)
  { 
    return true;
  }
  
}
int Factorial(int iNo)
{
  int i = 0;
  int iFact = 1;
  for(i=iNo;i>=1;i--)
  {
    iFact = iFact*i;
  }
  return iFact;
}