#include<stdio.h>
void SubArray(int[],int,int);
int main()
{
  int iNo = 0;
  int iCnt = 0;
  int Arr[10];
  int iSum = 0;
  
  printf("Enter size of array\n");
  scanf("%d",&iNo);
  
  printf("Enter %d elements\n",iNo);
  
  for(iCnt = 0;iCnt<iNo;iCnt++)
  {
    scanf("%d",&Arr[iCnt]);
  }
  
  printf("Enter a sum\n");
  scanf("%d",&iSum);
  
  SubArray(Arr,iNo,iSum);
  
  return 0;
}
void SubArray(int Brr[10],int iSize,int iSum1)
{
  int sub[10];
  int j = 0;
  int k = 0;
  int iAdd = 0;
  
  for(j=0;j<iSize;j++)
  {
    for(k=j+1;k<iSize;k++)
	{
	   iAdd = iAdd + Brr[j] + Brr[k];
	   Brr[j] = 0;
	   if(iAdd==iSum1)
	   {
	     printf("%d\t",Brr[j],Brr[k]);
		 break;
	   }
	  
		
	}
	
  }
}