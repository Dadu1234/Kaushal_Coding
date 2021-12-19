#include<stdio.h>
#include<stdlib.h>
void Rotate(int[],int,int);
int main()
{
 int *ptr = NULL;
 int iCnt = 0;
 int l = 0;
 int iLength = 0;
 
 printf("Enter length of array\n");
 scanf("%d",&iLength);
 
 ptr = (int *)malloc(iLength*sizeof(int));
 printf("Enter %d elements\n",iLength);
 for(iCnt=0;iCnt<iLength;iCnt++)
 {
   scanf("%d",&ptr[iCnt]);
 }
 
 printf("By How much position you want to shift\n");
 scanf("%d",&l);
 
 Rotate(ptr,iLength,l);
 
 return 0;
}
void Rotate(int Arr[],int iSize,int k)
{
  int i = 0;
  int j = 0;
  int Brr[10];
  for(i=0;i<iSize;i++)
  {
	  Brr[i] = Arr[i];
  }
  for(i=(iSize-k);i<iSize;i++)
  {
      Arr[i-k-1]  = Arr[i]; 
	  printf("%d\t",Arr[i-k-1]);
  }
 for(i=0;i<(k+1);i++)
 {
	 Arr[i+k] = Brr[i];
     printf("%d\t",Arr[i+k]);
 }
}