//////////////////////////////////////////////////////////////////////////////////////////
// WAP TO PRINT GIVEN MATRIX IN A SPIRAL FORMAT.
//////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>
void Spiral(int Brr[10][10],int,int);
int main()
{
  int Brr[10][10];
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
  
  printf("Enter %d elements\n",iNo);
  
  
  
  for(i = 1;i<=iRows;i++)
  { 
    for(j = 1;j<=iCols;j++)
	{
	  scanf("%d\t",&Brr[i][j]);
	}
  }
  
  Spiral(Brr,iRows,iCols);
  
  return 0;
}
void Spiral(int Arr[10][10],int iValue1,int iValue2)
{ 
  int i1 = 0;
  int j1 = 0;
  
  for(i1 = 1;i1<=iValue1;i1++)
  {
    for(j1 = 1;j1<=iValue2;j1++)
	{
	  printf("%d\t",Arr[i1][j1]);
	}
	printf("\n");
	break;
  }
}