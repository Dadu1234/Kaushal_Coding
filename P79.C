#include<stdio.h>
#include<stdlib.h>
void CountFrequency(int[],int);
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
  
  CountFrequency(ptr,iLength);
  
  return 0;
}
void CountFrequency(int Arr[],int iSize)
{
  int i = 0;
  int j = 0;
  int iCnt = 0;
  for(i=0;i<iSize;i++)
  {
    for(j=i+1;j<iSize;j++)
    {
	  if(Arr[i]==Arr[j])
	  {
	    iCnt++;
	  }
	}
	printf("%d occurs %d times\n",Arr[i],iCnt);
  }
}