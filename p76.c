#include<stdio.h>
#include<stdlib.h>
void ThreeDigit(int[],int);
int CountDigits(int);
int main()
{
  int *ptr = NULL;
  int iCnt = 0;
  int iLength = 0;
  
  printf("Enter length of array\n");
  scanf("%d",&iLength);
  
  ptr = (int *)malloc(iLength*sizeof(int));
  
  printf("Enter %d elements\n",iLength);
  
  for(iCnt=0;iCnt<iLength;iCnt++)
  {
    scanf("%d",&ptr[iCnt]);
  }
  
  ThreeDigit(ptr,iLength);
  
  return 0;
}
void ThreeDigit(int Arr[],int iSize)
{
  int i = 0;
  int iCount = 0;
  for(i=0;i<iSize;i++)
  {
    iCount=CountDigits(Arr[i]);
	if(iCount==3)
	{
	  printf("%d\t",Arr[i]);
	}
  }
}
int CountDigits(int iNo)
{
	int iFreq = 0;
	while(iNo!=0)
	{
		iNo = iNo/10;
	    iFreq++;
	}
	return iFreq;
}