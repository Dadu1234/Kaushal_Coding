#include<stdio.h>
int PositionDifference(int);
int main()
{
  int iNo = 0;
  int iRet = 0;
  
  printf("Enter a number\n");
  scanf("%d",&iNo);
  
  iRet = PositionDifference(iNo);
  
  printf("Difference is %d\n",iRet);
  
  return 0;
}
int PositionDifference(int iValue)
{
  int iDigit = 0;
  int Arr[10];
  int i = 0;
  int iSum1 = 0;
  int iSum2 = 0;
  int iRes = 0;
  int iCnt = 0;
  while(iValue!=0)
  {
     iDigit = iValue%10;
	 Arr[i] = iDigit;
	 iCnt++;
	 i++;
	 iValue = iValue/10;
  }
  for(i=(iCnt-1);i>=0;i--)
  {
    if(i%2==0)
	{
		iSum1 = iSum1 + Arr[i];
	}
	else
	{
		iSum2 = iSum2 + Arr[i];
	}
  }
  iRes = iSum1-iSum2;
  
  if(iRes<0)
  {
	  iRes = -iRes;
	  return iRes;
  }
  return iRes;
}