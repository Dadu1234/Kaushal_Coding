#include<stdio.h>
int ChkAutomorphic(int);
int main()
{
  int iNumber = 0;
  int iRet = 0;
  printf("Enter a number\n");
  scanf("%d",&iNumber);
  
  iRet = ChkAutomorphic(iNumber);
  if(iRet==1)
  {
    printf("Automorphic number\n");
  }
  if(iRet==0)
  {
    printf("Not an Automorphic number\n");
  }
  return 0;
}
int ChkAutomorphic(int iNo)
{
  int iSquare = 0;
  iSquare = iNo*iNo;
  
  while(iNo>0)
  {
    if((iSquare%10)!=(iNo%10))
	{
	  return 0;
	}
	iNo = iNo/10;
	iSquare = iSquare/10;
  }
  
  return 1;
}