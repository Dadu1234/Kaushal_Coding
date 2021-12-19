////////////////////////////////////////////////////////////////////
//WAP TO COUNT NUMBER OF VOWELS
///////////////////////////////////////////////////////////////////

#include<stdio.h>
int CountVowels(char *);

int main()
{
  char Arr[30];
  int iRet = 0;
  
  printf("Enter a string\n");
  scanf("%s",Arr);
  
  iRet = CountVowels(Arr);
  
  printf("Number of vowels are %d\n",iRet);
  
  return 0;
}
int CountVowels(char *str)
{
  int iCount = 0;
  while(*str!='\0')
  {
    if((*str=='a') || (*str=='e') || (*str=='i') || (*str=='o') || (*str=='u'))
	{
      iCount++;
	}
	
	str++;
  }
  return iCount;
}