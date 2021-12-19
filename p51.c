#include<stdio.h>
#include<stdbool.h>
bool ChkBits(int);
int main()
{
  int iValue = 0;
  bool bRet = false;
  
  printf("Enter a number\n");
  scanf("%d",&iValue);
  
  bRet = ChkBits(iValue);
  
  if(bRet==true)
  {
    printf("Bits are on\n");
  }
  else
  {
    printf("Bits are off\n");
  }
  
  return 0;
}
bool ChkBits(int iNo)
{
  int iMask = 0x00000860;
  int iRes = 0;
  iRes = iMask & iNo;
  if(iRes==iMask)
  {
    return true;
  }
  else
  {
    return false;
  }
  
}