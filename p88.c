#include<stdio.h>
#include<stdlib.h>
void DisplayArray(int[],int);
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
  
  DisplayArray(ptr,iLength);
  
  return 0;
}
void DisplayArray(int Arr[],int iSize)
{
  int i = 0;
  int j = 0;
  int k = 0;
  int iCount = 0;
  int iFreq = 0;
  int Brr[50];
  int Crr[50];
  for(i=0;i<iSize;i++)
  {
	  Brr[i] = Arr[i];
  }
  printf("Distinct elements array :\n");
  
  for(i=0;i<iSize;i++)
  {
    for(j=0;j<i;j++)
	{
	  if(Arr[i]==Arr[j])
	  {
	    break;
	  }
	}
	if(j==i)
    {
	  Crr[i] = Arr[i];
	  iCount++;
	} 
  }
  for(k = 0;k<iCount;k++)
  {
	  printf("%d\t",Crr[k]);
  }
 /* 
  for(i=0;i<iCount;i++)
  {
	  iFreq = 0;
	  for(j=0;j<iSize;j++)
	  {
		  if(Arr[i]==Brr[j])
		  {
			  iFreq++;
		  }
	  }
	  //printf("\n%d occurs %d times\n",Arr[i],iFreq);
  }
  */
}
   

