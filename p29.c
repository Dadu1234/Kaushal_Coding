#include<stdio.h>
#include<stdlib.h>
void OddOccurence(int[],int);
int main()
{
  int *ptr = NULL;
  int iNo = 0;
  int iCnt = 0;
  
  printf("Enter a size for array\n");
  scanf("%d",&iNo);
  
  ptr = (int *)malloc(iNo*sizeof(int));
  
  printf("Enter %d elements\n",iNo);
  
  for(iCnt=0;iCnt<iNo;iCnt++)
  {
    scanf("%d",&ptr[iCnt]);
  }
  
  OddOccurence(ptr,iNo);
  
  return 0;
}

void OddOccurence(int Arr[],int iSize)
{
  int i = 0;
  int j = 0;
  int iRes = 0;
  int count[10];
  for(i = 1;i<=iSize;i++)
  { 
    count[i] = 1;
  }
  
  for(i = 1;i<=(iSize-1);i++)
  {
    for(j = i+1;j<=iSize;j++)
	{
	  if(Arr[i]==Arr[j])
	  {
		  count[i]++;
	  }
	}
	if(iRes%2!=0)
	{
		printf("%d\t",Arr[i]);
	}
  }
}
  