//////////////////////////////////////////////////////////////////////////////////
//WAP TO COUNT FREQUENCY OF PARTICULAR CHARACTER IN A STRING.
//////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
int CountFreq(char *,char);
int main()
{
  char Arr[30];
  int iRet = 0;
  char ch;
  
  printf("Enter a string\n");
  scanf("%s",Arr);
  
  printf("Enter a character\n");
  scanf(" %c",&ch);
  
  iRet = CountFreq(Arr,ch);
  
  printf("Frequency of %c is %d\n",ch,iRet);
  
  return 0;
}
int CountFreq(char *str,char cValue)
{
  int iCount = 0;
  int i = 0;
  
  while(*str!='\0')
  {
     if(*str==cValue)
	 {
	   iCount++;
	 }
	 
	 str++; 
  }
  return iCount;
}