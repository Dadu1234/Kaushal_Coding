#include<stdio.h>
#include<stdlib.h>
int main()
{
  int iLength = 0;
  int *ptr = NULL;
  int iCnt = 0;
  int i = 0;
  int j = 0;
  int round = 0;
  int temp = 0;
  int iFreq = 0;
  int k = 0;
  printf("Enter length of array\n");
  scanf("%d",&iLength);
  
  ptr = (int *)malloc(iLength*sizeof(int));
  
  printf("Enter %d elements\n",iLength);
  
  for(iCnt=0;iCnt<iLength;iCnt++)
  {
    scanf("%d",&ptr[iCnt]);
  }
  
  printf("Arrray in ascending order is :\n");
  
  for(round=1;round<=iLength;round++)
  {
    for(i=0;i<iLength;i++)
    {
      for(j=i+1;j<iLength;j++)
	  {
	    if(ptr[i]>ptr[j])
	   {
	    temp = ptr[i];
		ptr[i] = ptr[j];
		ptr[j] = temp;
	   }
	 }
   }
 }
 for(i=0;i<iLength;i++)
 {
   printf("%d\t",ptr[i]);
 }
 
 for(i=0;i<(iLength-2);i++)
 {
	 for(j=i+1;j<(iLength-1);j++)
	 {
		 for(k=j+1;k<(iLength);k++)
		 {
			 if((ptr[i] + ptr[j]) > ptr[k])
			 {
				  iFreq++;
			 }
		 }
	 }
 }
 printf("\nThe number of triangles are %d\n",iFreq);
 return 0;
}
  
  