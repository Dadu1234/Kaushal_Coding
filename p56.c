#include<stdio.h>
#include<stdlib.h>
void DisplayPairs(int[],int,int);
int main()
{
  int *ptr = NULL;
  int iLength = 0;
  int iCnt = 0;
  int iDiff = 0;
  
  printf("Enter a length\n");
  scanf("%d",&iLength);
  
  ptr = (int *)malloc(iLength*sizeof(int));
  
  printf("Enter %d elements\n",iLength);
  
  for(iCnt=0;iCnt<iLength;iCnt++)
  {
    scanf("%d",&ptr[iCnt]);
  }
  
  printf("Enter a difference\n");
  scanf("%d",&iDiff);
  
  DisplayPairs(ptr,iLength,iDiff);
  
  return 0;
}
void DisplayPairs(int Arr[],int iSize,int iDiff1)
{
  int i = 0;
  int j = 0;
  for(i = 0;i<(iSize-1);i++)
  {
    for(j=i+1;j<iSize;j++)
	{
	  if((Arr[j]-Arr[i]==iDiff1) || (Arr[j]-Arr[i]==(-iDiff1)))
	  {
	     printf("%d\t%d",Arr[i],Arr[j]);
	  }
	}
  }
  
}
  