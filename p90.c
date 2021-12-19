#include<stdio.h>
#include<stdlib.h>
void DisplayArray(int[],int);
int main()
{
  int iLength = 0;
  int *ptr = NULL;
  int iCnt = 0;
  
  printf("Enter legth of array\n");
  scanf("%d",&iLength);
  
  ptr = (int *)malloc(iLength*sizeof(int));\
  
  printf("Enter %d elements\n",iLength);
  
  for(iCnt=0;iCnt<iLength;iCnt++)
  {
    scanf("%d",&ptr[iCnt]);
  }
  
  DisplayArray(ptr,iLength);
  
  return 0;
}
void DisplayArray(int Arr[],int iSize)
{
  int i = 0;
  int j = 0;
  int k = 0;
  int iRound = 0;
  int temp = 0;
  int Brr[50];
  for(k=0;k<iSize;k++)
  {
    Brr[k] = Arr[i];
  }
  for(iRound=1;iRound<=iSize;iRound++)
  {
    for(i=0;i<(iSize-1);i++)
	{  
	  for(j=i+1;j<iSize;j++)
	  {
	    if(Arr[i]>Arr[j])
		{
		  temp = Arr[i];
		  Arr[i] = Arr[j];
		  Arr[j] = temp;
		}
      }
	}
  }
  printf("Sorted array is:\n");
  for(i=0;i<iSize;i++)
  { 
    printf("%d\t",Arr[i]);
  }
  printf("\n");
  for(k=0;k<iSize;k++)
  {
	  for(i=0;i<iSize;i++)
	  {
		  if(Brr[k]==Arr[i])
		  {
			 break;
			 
		  }
		 
	  }	  
	  if(Brr[k]==Arr[i])
      {
	     printf("%d\t",i+1);
      }
  }
  
}