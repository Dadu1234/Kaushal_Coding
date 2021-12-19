#include<stdio.h>
#include<stdlib.h>
void DisplayArray(int[],int,int[],int);
int main()
{
  int *ptr1 = NULL;
  int iLength1 = 0;
  int iCnt1 = 0;
  int *ptr2 = NULL;
  int iLength2 = 0;
  int iCnt2 = 0;
  
  printf("Enter length of first array\n");
  scanf("%d",&iLength1);
  
  ptr1 = (int *)malloc(iLength1*sizeof(int));
  
  printf("Enter %d elements\n",iLength1);
  
  for(iCnt1=0;iCnt1<iLength1;iCnt1++)
  {
    scanf("%d",&ptr1[iCnt1]);
  }
  
  printf("Enter length of second array\n");
  scanf("%d",&iLength2);
  
  ptr2 = (int *)malloc(iLength2*sizeof(int));
  
  
  printf("Enter %d elements\n",iLength2);
  
  
  for(iCnt2=0;iCnt2<iLength2;iCnt2++)
  {
    scanf("%d",&ptr2[iCnt2]);
  }
  
  DisplayArray(ptr1,iLength1,ptr2,iLength2);
  
  return 0;
}
void DisplayArray(int Arr[],int iSize1,int Brr[],int iSize2)
{
  int i = 0;
  int j = 0;
  int k = 0;
  int l = 0;
  int Crr[50];
  int iCount = 0;
  for(i=0;i<iSize2;i++)
  {
    for(j=0;j<iSize1;j++)
	{
	  if(Brr[i]==Arr[j])
	  {
	    Crr[i] = Arr[j];
		printf("%d\t",Crr[i]);
		iCount++;
      }
	}
  }
  for(k=0;k<iSize1;k++)
  {
	  for(l=0;l<iCount;l++)
	  {
		  if(Arr[k]==Crr[l])
		  {
			  break;
		  }
	  }
	  if(l==iCount)
	  {
		   printf("%d\t",Arr[k]);
	  }
  }
}