#include<stdio.h>
void Pattern(int,int);
int main()
{
	int iValue1 = 0;
	int iValue2 = 0;
	printf("Enter number of rows\n");
	scanf("%d",&iValue1);
	
	printf("Enter number of columns\n");
	scanf("%d",&iValue2);
	
	Pattern(iValue1,iValue2);
	
	return 0;
}



void Pattern(int iRow,int iCol)
{
   int i = 0;
   int j = 0;
   char ch = 'A';
   int k = 0;
   for(k=0;k<=iRow;k++)
   {
	  for(i=1,ch = 'A';i<=iRow;i++)
	  {
	    for(j=1;j<=iCol,ch<='D';j++,ch++)
		  {
			  printf("%c\t",ch);
		  }
		  
	  }
	  printf("\n");
   }
}

