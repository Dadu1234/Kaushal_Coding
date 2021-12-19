#include<stdio.h>
#include<stdlib.h>
int CountFreq(int[],int,int);
int main()
{
 int *ptr = NULL;
 int iLength = 0;
 int iCnt = 0;
 int iRet = 0;
 int iNumber = 0;
 
 printf("Enter size of array\n");
 scanf("%d",&iLength);
 
 ptr = (int *)malloc(iLength*sizeof(int));
 
 printf("Enter %d elements\n",iLength);
 
 for(iCnt=0;iCnt<iLength;iCnt++)
 {
   scanf("%d",&ptr[iCnt]);
 }
 printf("Enter a number for calculating frequency\n");
 scanf("%d",&iNumber);
 
 iRet = CountFreq(ptr,iLength,iNumber);
 
 printf("Count is %d\n",iRet);
 
 return 0;
}
int CountFreq(int Arr[],int iSize,int iNo)
{
  int i = 0;
  int iStart = 0;
  int iEnd = 0;
  int iFreq = 0;
  for(iStart=0,iEnd=iSize-1;iStart<=iEnd;iStart++,iEnd--)
  {
    if((iStart==iEnd) && (Arr[iStart]==iNo))
    {
        iFreq++;
        break;
    }
    
    if(Arr[iStart]==iNo)
	{
	  iFreq++;
	  
	}
	if(Arr[iEnd]==iNo)
	{
	  iFreq++;
	}
  }
   return iFreq;
}
