#include<stdio.h>
int BinaryToDecimal(int);
int power(int,int);
int main()
{
  int iNumber = 0;
  int iRet = 0;
  
  printf("Enter a binary number in 0's and 1's format\n");
  scanf("%d",&iNumber);
  
  iRet = BinaryToDecimal(iNumber);
  
  printf("Equivalent decimal is %d\n",iRet);
  
  return 0;
}
int BinaryToDecimal(int iValue)
{
  int iDigit = 0;
  int iSum = 0;
  int iBase = 2;
  int iCnt = 0;
  
  while(iValue>0)
  {
    iDigit = iValue%10;
	iSum = iSum + (iDigit*power(iBase,iCnt));
	iValue = iValue/10;
	iCnt++;
  }
  return iSum;
}
int power(int iBase1,int iCnt1)
{
  int iRes = 1;
  int i = 0;
 
  if(iCnt1==0)
  {
    return 1;
  }
  else
  {
    for(i=1;i<=iCnt1;i++)
    {
      iRes = iRes*iBase1;
    }
	return iRes;
  }
}
  