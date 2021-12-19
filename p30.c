/////////////////////////////////////////////////////////
//Find a sorted subsequence of size 3 in linear time.
/////////////////////////////////////////////////////////

#include<stdio.h>
void ThreeLinear(int[],int);
int main()
{
  int Arr[50];
  int iCnt = 0;
  int iNo = 0;
  
  printf("Enter size of array\n");
  scanf("%d",&iNo);
  
  printf("Enter %d elements\n",iNo);
  
  for(iCnt = 1;iCnt<=iNo;iCnt++)
  {
    scanf("%d",&Arr[iCnt]);
  }
  
  printf("Three elements are:\n");
  
  ThreeLinear(Arr,iNo);
  
  return 0;
}
void ThreeLinear(int Brr[50],int iSize)
{
  int i = 0;
  int j = 0;
  int k = 0;
  for(i=1;i<=(iSize-2);i++)
  {
    for(j=(i+1);j<=(iSize-1);j++)
	{
	  for(k=(j+1);k<=iSize;k++)
	  {
	    if(Brr[i]<Brr[j]<Brr[k])
		{
		   printf("%d %d %d",Brr[i],Brr[j],Brr[k]);
		   break;
		}
	  }
	}
  }
}