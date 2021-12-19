#include<stdio.h>
int CountNumbers(int,int);
int main()
{
  int iNo1 = 0;
  int iNo2 = 0;
  int iRet = 0;
  
  printf("Enter first number\n");
  scanf("%d",&iNo1);
  
  printf("Enter second number\n");
  scanf("%d",&iNo2);
  
  iRet = CountNumbers(iNo1,iNo2);
  
  printf("Total numbers are %d\n",iRet);
  
  return 0;
}
int CountNumbers(int iValue1,int iValue2)
{
  int iCnt = 0;
  int iFreq = 0;
  for(iCnt=iValue1;iCnt<=iValue2;iCnt++)
  {
    if(iCnt%11!=0)
	{
	  iFreq++;
	}
  }
  return iFreq;
}