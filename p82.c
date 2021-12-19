#include<stdio.h>
#include<stdlib.h>
void DisplayPair(int[],int);
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
  
  DisplayPair(ptr,iLength);
  
  return 0;
}

void DisplayPair(int Arr[],int iSize)
{
  int i = 0;
  int j = 0;
  for(i=0;i<iSize;i=i+2)
  {
    for(j=1;j<iSize;j=j+2)
	{
	  if(Arr[i]==Arr[j])
	  {
	    printf("%d\t%d\n",Arr[i],Arr[i+1]);
	  }
	}
  }
}
  