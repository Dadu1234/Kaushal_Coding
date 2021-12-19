///////////////////////////////////////////////
// WAP TO FIND REPEATING ELEMENTS
///////////////////////////////////////////////

#include<stdio.h>
void REPEATING(int[],int);
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
 
 REPEATING(Arr,iNo);
 
 return 0;
}
void REPEATING(int Brr[],int iSize)
{ 
  int j = 0;
  int k = 0;
  printf("Repeating elements are\n");
  for(j=0;j<(iSize-1);j++)
  {
    for(k=j+1;k<iSize;k++)
	{
	  if(Brr[j]==Brr[k])
	  {
	     printf("%d\t",Brr[j]);
	  }
	} 
  }
}
	  