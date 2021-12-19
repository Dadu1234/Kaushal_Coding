/////////////////////////////////////////////////////////////////////////////////////////////////
// FIND TRIPLET OF GIVEN SUM IN ARRAY.
/////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>
void Triplet(int[],int,int);
int main()
{
  int *ptr = NULL;
  int iCnt = 0;
  int iNo = 0;
  int iSum = 0;
  
  printf("Enter size of array\n");
  scanf("%d",&iNo);
  
  ptr = (int *)malloc(iNo*sizeof(int));
  
  printf("Enter %d elements\n",iNo);
  
  for(iCnt=0;iCnt<iNo;iCnt++)
  {
    scanf("%d",&ptr[iCnt]);
  }
  
  printf("Enter a sum\n");
  scanf("%d",&iSum);
  
  Triplet(ptr,iNo,iSum);
  
  return 0;
}
void Triplet(int Arr[],int iSize,int iValue)
{
  int i = 0;
  int j = 0;
  int k = 0;
  
  for(i = 1;i<=(iSize-2);i++)
  {
    for(j = i+1;j<=(iSize-1);j++)
	{
	  for(k = j+1;k<=(iSize);k++)
	  {
	     if((Arr[i] + Arr[j] + Arr[k])==iValue)
		 {
		    printf("Triplet is %d,%d,%d",Arr[i],Arr[j],Arr[k]);
		 }
	  }
	}
  }
}