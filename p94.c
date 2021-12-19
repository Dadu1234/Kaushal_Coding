#include<stdio.h>
void SeperateDigits(int,int);
int main()
{
  int iValue = 0;
  int iNumber = 0;
  printf("How many digit number you want to print\n");
  scanf("%d",&iValue);
  
  printf("Enter %d digit number\n",iValue);
  scanf("%d",&iNumber);
  
  SeperateDigits(iNumber,iValue);
  
  return 0;
}
void SeperateDigits(int iNumber1,int iSize)
{
  int iDigit = 0;
  int i = 0;
  int Arr[50];
  while(iNumber1!=0)
  {
    iDigit = iNumber1%10;
	Arr[i] = iDigit;
	i++;
	iNumber1 = iNumber1/10;
  }
  
  for(i=iSize-1;i>=0;i--)
  {
	  printf("%d\t",Arr[i]);
  }
}