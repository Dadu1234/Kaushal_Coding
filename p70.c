#include<stdio.h>
#include<stdbool.h>
bool ChkFriendly(int,int);
int main()
{
  bool bRet = false;
  int iNo1 = 0;
  int iNo2 = 0;
  printf("Enter first number\n");
  scanf("%d",&iNo1);
  
  printf("Enter second number\n");
  scanf("%d",&iNo2);
  
  bRet = ChkFriendly(iNo1,iNo2);
  
  if(bRet==true)
  {
     printf("Numbers are friendly\n");
  }
  else
  {
     printf("Numbers are not friendly\n");
  }
  
  return 0;
}
bool ChkFriendly(int iValue1,int iValue2)
{
  int i = 0;
  int iSum1 = 0;
  int j = 0;
  int iSum2 = 0;
  int iAbundance1 = 0;
  int iAbundance2 = 0;
  
  for(i=1;i<=iValue1;i++)
  {
    if(iValue1%i==0)
	{
	  iSum1 = iSum1 + i;
	}
  }
  iAbundance1 = iSum1/iValue1;
  
  for(j=1;j<=iValue2;j++)
  {
    if(iValue2%j==0)
	{
	  iSum2 = iSum2 + j;
	}
  }
  
  iAbundance2 = iSum2/iValue2;
  printf("Abundancy index is %d\n",iAbundance1);
  
  if(iAbundance1==iAbundance2)
  {
    return true;
  }
  else
  {
    return false;
  }
}