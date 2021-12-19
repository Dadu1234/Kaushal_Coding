/////////////////////////////////////////////////////////////////////////////////////////////
//Accept string from user and return number of digits in it.
/////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
int CountDigit(char[]);
int main()
{
  char Arr[30];
  int iRet = 0;
  
  printf("Enter a string\n");
  scanf("%[^'\n']s",Arr);
  
  iRet = CountDigit(Arr);
  
  printf("Number of digits is %d\n",iRet);
  
  return 0;
}
int CountDigit(char *str)
{
  int iCount = 0;
  while(*str!='\0')
  {
    if((*str>='0') && (*str<='9'))
	{
	   iCount++;
	}
	
	str++;
  }
  return iCount;
}