/////////////////////////////////////////////////////////////////////
// Find maximum length of bitonic array.
/////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>
void BitonicSize(int[],int[],int,int);
int main()
{
  int Crr[10];
  int Drr[10];
  int iCnt1 = 0;
  int iCnt2 = 0;
  int iNo1 = 0;
  int iNo2 = 0;
  
  printf("Enter size of first array\n");
  scanf("%d",&iNo1);
  
  printf("Enter %d elements\n",iNo1);
  
  for(iCnt1=0;iCnt1<iNo1;iCnt1++)
  {
	   scanf("%d",&Crr[iCnt1]);
  }
  
  printf("Enter size of second array\n");
  scanf("%d",&iNo2);
  
  printf("Enter %d elements\n",iNo2);
  
  for(iCnt2=0;iCnt2<iNo2;iCnt2++)
  {
	  scanf("%d",&Drr[iCnt2]);
  }
  
  BitonicSize(Crr,Drr,iNo1,iNo2);
  return 0;
  
}
void BitonicSize(int Arr[],int Brr[],int iSize1,int iSize2)
{
  int i = 0;
  int j = 0;
  int iRes = 0;
  
  for(i=0;i<iSize2;i++)
  {
    for(j = 0;j<iSize1;j++)
	{
	  if(Brr[i]==Arr[j]);
	  {
	    iRes++;
	  }
	}
  }
  
  printf("Maximum size of Bitcoin array is %d\n",iRes);
}