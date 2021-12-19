#include<stdio.h>
#include<stdlib.h>
int Equilibrum(int[],int);
int main()
{
   int *ptr = NULL;
   int iLength = 0;
   int iCnt = 0;
   int iRet = 0;
   
   printf("Enter length of array\n");
   scanf("%d",&iLength);
   
   ptr = (int *)malloc(iLength*sizeof(int));
   
   printf("Enter %d elements\n",iLength);
   
   for(iCnt=0;iCnt<iLength;iCnt++)
   {
     scanf("%d",&ptr[iCnt]);
   }
   
   iRet = Equilibrum(ptr,iLength);
   
   printf("Equilibrum index is %d\n",iRet);
   
   return 0;
}
int Equilibrum(int Arr[],int iSize)
{
  int i = 0;
  int iLeftSum = 0;
  int iRightSum = 0;
  int j = 0;
  int iIndex= 0;
  iIndex = (iSize/2);
  printf("Index is %d\n",iIndex);
  for(i=0;i<iIndex;i++)
  {
    iLeftSum = iLeftSum + Arr[i];
  }
  for(j=(iIndex+1);j<iSize;j++)
  {
    iRightSum = iRightSum + Arr[j];
  }
  
  if(iLeftSum==iRightSum)
  {
    return iIndex;
  }
}