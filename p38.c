////////////////////////////////////////////////////////////////////
// WAP TO COUNT NUMBER OF CAPITAL LETTERS IN A STRING
////////////////////////////////////////////////////////////////////

#include<stdio.h>
int CountCap(char *);
int main()
{
   char Arr[30];
   int iRet = 0;
   
   printf("Enter a string\n");
   scanf("%s",Arr);
   
   iRet = CountCap(Arr);
   
   printf("Number of capital letters are %d\n",iRet);
   
   return 0;
}
int CountCap(char *str)
{
  int iCount = 0;
  while(*str!='\0')
  {
    if((*str>='A') && (*str<='Z'))
	{
	  iCount++;
	}
    
	str++;
  }
  return iCount;
}