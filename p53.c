#include<stdio.h>
int Toggle(int,int);
int main()
{
  int iNo = 0;
  int iPos = 0;
  int iRes = 0;
  
  printf("Enter a number\n");
  scanf("%d",&iNo);
  
  printf("Enter a position number\n");
  scanf("%d",&iPos);
  
  iRes = Toggle(iNo,iPos);
  
  printf("Result after toggling is %d\n",iRes);
  
  return 0;
}
int Toggle(int iValue,int iPos1)
{
  int iMask = 0x00000001;
  int iResult = 0;
  
  iMask = iMask << (iPos1-1);
  iResult = iMask ^ iValue;
  
  return iResult;
}