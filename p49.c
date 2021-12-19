#include<stdio.h>
typedef int bool;
#define TRUE 1
#define FALSE 0

int main()
{
  int iNo = 0;
  bool bRet = false;
  
  printf("Enter a number\n");
  scanf("%d",&iNo);
  
  bRet = ChkBit(iNo);
  
  if(bRet==TRUE)
  {
    printf("4th bit is ON\n");
  }
  else
  {
    printf("4th bit is OFF\n");
  }
  
  return 0;
}
BOOL ChkBit(int iValue)
{
  int iMask = 0x00000008;
  int iRes = 0;
  iRes = iValue & iMask;
  if(iRes==iMask)
  {
     return TRUE;
  }
  else
  {
     return FALSE;
  }
}