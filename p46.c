//////////////////////////////////////////////////////////////////////////////////
// WAP TO DISPLAY BINARY REPRESENATION.
//////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
void Binary(int);
int main()
{
  int iNo = 0;
  
  printf("Enter a number\n");
  scanf("%d",&iNo);
  
  printf("Binary representation of %d is:\n");
  
  Binary(iNo);
  
  return 0;
}
void Binary(int iValue)
{
  int iRem = 0;
  while(iValue!=0)
  {
    iRem = iValue%2;
	iValue = iValue/2;
    printf("%d\t",iRem);
  }
}  