#include<stdio.h>
#include<stdlib.h>
void DisplayAddition(int[],int);
int main()
{
 int *ptr = NULL;
 int iLength = 0;
 int iCnt = 0;

 
 printf("Enter size of array\n");
 scanf("%d",&iLength);
 
 ptr = (int *)malloc(iLength*sizeof(int));
 
 printf("Enter %d elements\n",iLength);
 
 for(iCnt=0;iCnt<iLength;iCnt++)
 {
   scanf("%d",&ptr[iCnt]);
 }
 
 DisplayAddition(ptr,iLength);
 
 return 0;
}
void DisplayAddition(int Arr[],int iSize)
{
  int i = 0;
  int iNo = 0;
  int iSum = 0;
  int iDigit = 0;
  for(i=0;i<iSize;i++)
  {
    iNo = Arr[i];
	iSum = 0;
	
	while(iNo!=0)
	{
	  iDigit = iNo%10;
	  iSum = iSum + iDigit;
	  iNo = iNo/10;
	}
	
	printf("%d---->%d\n",Arr[i],iSum);
  }
}