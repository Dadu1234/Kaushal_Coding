#include<stdio.h>
#include<stdlib.h>
void MaxSubArray(int[],int,int);
int main()
{
  int *ptr = NULL;
  int N = 0;
  int iCnt = 0;
  int sub = 0;
  
  printf("Enter a number\n");
  scanf("%d",&N);
  
  ptr = (int *)malloc(N*sizeof(int));
  
  printf("Enter %d elements\n",N);
  
  for(iCnt=0;iCnt<N;iCnt++)
  {
    scanf("%d",&ptr[iCnt]);
  }
  
  printf("Enter size of subarray\n");
  scanf("%d",&sub);
  
  MaxSubArray(ptr,N,sub);
  
  return 0;
}

void MaxSubArray(int Brr[],int iSize,int k)
{
  int i = 0;
  int j = 0;
  int max = 0;
  max = Brr[0];
  
  for(i = 0;i<=(iSize-k);i++)
  {
    max = Brr[i];
	for(j = i;j < (k+i);j++)
	{
	  if(Brr[j]>max)
	  {
	    max = Brr[j];
	  }
	  
	}
	printf("%d\t",max);
  }
}