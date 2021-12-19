#include<stdio.h>
int CountOne(int);
int main()
{
  int iNo = 0;
  int iRet = 0;
  
  printf("Enter a number\n");
  scanf("%d",&iNo);
  
  iRet = CountOne(iNo);
  
  printf("The number of ones in binary format is %d\n",iRet);
  
  return 0;
}
int CountOne(int iValue)
{
  int iCount = 0;
  int iRem = 0;
  while(iValue!=0)
  {
    iRem = iValue%2;
    if(iRem==1)
	{
	   iCount++;
	}
	iValue = iValue/2;
  }
  
  return iCount;
}