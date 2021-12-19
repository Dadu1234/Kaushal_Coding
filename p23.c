#include<stdio.h>
#include<stdlib.h>
void Median(int[],int);
int main()
{
  int *ptr = NULL;
  int iCnt = 0;
  int iNo = 0;
  int iRound = 0;
  
  printf("Enter size of array\n");
  scanf("%d",&iNo);
  
  ptr = (int *)malloc(iNo*sizeof(int));
  
  printf("Enter %d elements\n",iNo);
  
  for(iCnt = 0;iCnt<iNo;iCnt++)
  {
    scanf("%d",&ptr[iCnt]);
  }
  
  printf("Array in ascending order\n");
  
  Median(ptr,iNo);
  
  return 0;
}
void Median(int Arr[],int iSize)
{
  int i = 0;
  int j = 0;
  int temp = 0;
  int iRound = 0;
  int k = 0;
  int iRes = 0;
  k = (iSize)/2;
  
  for(iRound=1;iRound<=(iSize-1);iRound++)
  {
    for(i = 0;i<(iSize-1);i++)
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
  
  for(i = 0;i<iSize;i++)
  {
    printf("%d\t",Arr[i]);
  }
  
  if(iSize%2==0)
  {
	  iRes = (Arr[k-1] + Arr[k])/2;
  }
  else
  {
	   iRes = Arr[k];
  }
  
  printf("\nMedian is %d\n",iRes);
}

  
  