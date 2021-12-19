#include<stdio.h>
#include<stdlib.h>
int CountPerfect(int[],int);
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
 
 iRet = CountPerfect(ptr,iLength);
 
 printf("Number of perfect numbers are %d\n",iRet);
 
 return 0;
}
int CountPerfect(int Arr[],int iSize)
{
  int iNo = 0;
  int i = 0;
  int iSum = 0;
  int iPerfect = 0;
  int j = 0;
  
  for(i = 0;i<iSize;i++)
  {
    iNo = Arr[i];
	iSum = 0;
	
	for(j = 1;j<=iNo/2;j++)
	{
	  if(iNo%j==0)
	  {
	    iSum = iSum + j;
	  }
	}
	
	if(iSum==iNo)
	{
	  iPerfect++;
	}
  }
}