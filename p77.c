#include<stdio.h>
int CountDivisiors(int);
int CountEquals(int,int);
int main()
{
  int iNumber = 0;
  int iValue = 0;
  int iRet = 0;
  printf("Enter a number\n");
  scanf("%d",&iNumber);
  
  printf("Enter a value\n");
  scanf("%d",&iValue);
  
  iRet = CountEquals(iNumber,iValue);
  
  printf("\nTotal such numbers are %d\n",iRet);
  
  return 0;
}
int CountEquals(int iNo,int x)
{
  int i = 0;
  int j = 0;
  int iCnt1 = 0;
  int iCnt2 = 0;
  for(i=1;i<=iNo;i++)
  {
    iCnt1 = CountDivisiors(i);
	if(iCnt1==x)
	{
	  printf("%d\t",i);
	  iCnt2++;
	}
  }
  return iCnt2;
}
int CountDivisiors(int iNo1)
{
  int k = 0;
  int iFreq = 0;
  for(k=1;k<=iNo1;k++)
  {
	  if((iNo1%k)==0)
	  {
		  iFreq++;
	  }
  }
  return iFreq;
}