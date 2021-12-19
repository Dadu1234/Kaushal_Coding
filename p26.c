#include<stdio.h>
void SmallerCount(int[],int);
int main()
{
  int iNo = 0;
  int Arr[10];
  int iCnt = 0;
  
  printf("Enter size of original array\n");
  scanf("%d",&iNo);
  
  printf("Enter %d elements\n",iNo);
  
  for(iCnt=0;iCnt<iNo;iCnt++)
  {
    scanf("%d",&Arr[iCnt]);
  }
  
  SmallerCount(Arr,iNo);
  
  return 0;
}
void SmallerCount(int Brr[10],int iSize)
{ 
  int j = 0;
  int l = 0;
  int k = 0;
  int smaller[10];
  for(l = 0;l<iSize;l++)
  {
    smaller[l] =0;
  }
  
  for(j = 0;j<iSize;j++)
  {
    for(k = j+1;k<iSize;k++)
	{
	  if(Brr[j]>Brr[k])
	  {
	    smaller[j]++;
		
	  }
	  
	}
	printf("%d\t",smaller[j]);
  }
}