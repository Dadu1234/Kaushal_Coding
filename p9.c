/////////////////////////////////////////////////////////////////////////////////////////////////
// Given an array A[] consisting 0s, 1s and 2s. The task is to write a function 
//that sorts the given array. The functions should put all 0s first, then all 1s and all 2s in last.
// Input :- {0,1,2,0,1,2}
// Output : - {0,0,1,1,2,2}
/////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
void SEGREGATE(int[],int);
int main()
{
  int iNo = 0;
  int Arr[iNo];
  int i = 0;
  
  printf("Enter a number\n");
  scanf("%d",&iNo);
  
  printf("Enter %d elements\n",iNo);
  
  for(i=0;i<iNo;i++)
  {
    scanf("%d",&Arr[i]);
  }
  
  SEGREGATE(Arr,iNo);
  
  return 0;
}
void SEGREGATE(int Brr[],int iSize)
{ 
  int j = 0;
  int k = 0;
  int temp = 0;
  for(j=0;j<(iSize-1);j++)
  {
    for(k=j+1;k<iSize;k++)
	{
	  if(Brr[j]>Brr[k])
	  {
	    temp = Brr[j];
		Brr[j] = Brr[k];
		Brr[k] = temp;
	  }
	}
  }
  
  for(j=0;j<iSize;j++)
  {
    printf("%d\t",Brr[j]);
  }
}