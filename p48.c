#include<stdio.h>
#include<stdbool.h>
bool ChkBit(int);
int main()
{
  int iValue = 0;
  bool bRet = false;
  
  printf("Enter a number\n");
  scanf("%d",&iValue);
  
  bRet = ChkBit(iValue);
  
  if(bRet==true)
  {
    printf("4th bit is ON\n");
  }
  else
  {
    printf("4th bit is OFF\n");
  }
  
  return 0;
}
bool ChkBit(int iNo)
{
  int iPos = 0;
  int iRem = 0;
  
  while(iNo!=0)
  {
    iRem = iRem%2;
	iPos++;
	if(iPos==4)
	{
	  break;
	}
	iNo = iNo/2;
  }
  if((iPos==4) && (iRem==1))
  {
    return true;
  }
  else
  {
    return false;
  }
} 
