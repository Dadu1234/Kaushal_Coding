#include<stdio.h>
#include<stdbool.h>
bool ChkAbundace(int);
int main()
{
  int iNo = 0;
  bool bRet = false;
  
  printf("Enter a number\n");
  scanf("%d",&iNo);
  
  bRet = ChkAbundace(iNo);
  
  if(bRet==true)
  {
    printf("Number is Abundance\n");
  }
  else
  {
    printf("Number is not Abundance\n");
  }
  return 0;
}
bool ChkAbundace(int iValue)
{
  int i = 0;
  int iSum = 0;
  for(i=1;i<iValue;i++)
  {
    if(iValue%i==0)
	{
	  iSum = iSum + i;
	}
  }
  printf("Sum of divisors is %d\n",iSum);
  if(iSum>iValue)
  {
	  return true;
  }
  else
  {
	  return false;
  }
}