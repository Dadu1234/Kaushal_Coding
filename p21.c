//////////////////////////////////////////////////////////////////////////////////////////////////////
// Given a boolean matrix mat[M][N] of size M X N, modify it such that if a matrix cell mat[i][j] is 1 (or true) then make all the cells of ith row and jth column as 1. 
//////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
void Boolean(int Arr[10][10],int,int);
int main()
{
 int Arr[10][10];
 int i = 0;
 int j = 0;
 int iRows = 0;
 int iCols = 0;
 int iNo = 0;
 
 printf("Enter number of rows\n");
 scanf("%d",&iRows);
 
 printf("Enter number of columns\n");
 scanf("%d",&iCols);
 
 iNo = (iRows)*(iCols);
 
 printf("Enter %d elements for 2-d array\n",iNo);
 
 for(i=1;i<=iRows;i++)
 {
   for(j=1;j<=iCols;j++)
   {
    scanf("%d",&Arr[i][j]);
   }
 }
 
 Boolean(Arr,iRows,iCols);
 
 return 0;
}
void Boolean(int Brr[10][10],int iValue1,int iValue2)
{
  int i1 = 0;
  int j1 = 0;
  for(i1=1;i1<=iValue1;i1++)
  { 
    for(j1=1;j1<=iValue2;j1++)
	{
	  if(Brr[i1][j1] = 1)
	  {
	     for(i1 = 1;i1<=i1;i1++)
		 {
		   for(j1= 1;j1<=iValue2;j1++)
		   {
		     Brr[i1][j1] = 1;
			 
		   }
		 }
	  }
	}
	break;
  }
  
   for(i1=1;i1<=iValue1;i1++)
  { 
    for(j1=1;j1<=iValue2;j1++)
	{
	  if(Brr[i1][j1] = 1)
	  {
	     for(i1 = 1;i1<=iValue1;i1++)
		 {
		   for(j1= 1;j1<=i1;j1++)
		   {
		     Brr[i1][j1] = 1;
		   }
		 }
	  }
	}
	break;
  }
		   
  printf("Modified matrix is\n");

  for(i1=1;i1<=iValue1;i1++)
  {
   for(j1=1;j1<=iValue2;j1++)
   {
     printf("%d\t",Brr[i1][j1]);  
   }
  }   
}