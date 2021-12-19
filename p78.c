#include<stdio.h>
#include<stdlib.h>
void ReverseArray(int[],int);
int main()
{
  int *ptr = NULL;
  int iLength = 0;
  int iCnt = 0;
  
  printf("Enter length of array\n");
  scanf("%d",&iLength);
  
  ptr = (int *)malloc(iLength*sizeof(int));
  
  printf("Enter %d elements\n",iLength);
  
  for(iCnt=0;iCnt<iLength;iCnt++)
  {
    scanf("%d",&ptr[iCnt]);
  }
  
  ReverseArray(ptr,iLength);
  
  return 0;
}
void ReverseArray(int Arr[],int iSize)
{
  int i = 0;
  int temp = 0;
  for(i=0;i<=(iSize/2);i++)
  {
    temp = Arr[i];
	Arr[i] = Arr[iSize-1-i];
	Arr[iSize-1-i] = temp;
  }
  for(i=0;i<iSize;i++)
  {
    printf("%d\t",Arr[i]);
  }
}