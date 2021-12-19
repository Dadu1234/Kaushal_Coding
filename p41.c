/////////////////////////////////////////////////////////////////////////////////////////
//WAP TO RETURN 1ST OCCURENCE OF A PARTICULAR CHARACTER.
/////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
int FirstOccurence(char *,char);
int main()
{
  char Arr[30];
  int iRet = 0;
  char ch;
  
  printf("Enter a string\n");
  scanf("%[^'\n']s",Arr);
  
  printf("Enter a character\n");
  scanf(" %c",&ch);
  
  iRet = FirstOccurence(Arr,ch);
  
  printf("First occurence of %c is %d\n",ch,iRet);
  
  return 0;
}
int FirstOccurence(char *str,char cValue)
{
  int i = 0;
  while(*str!='\0')
  {
    if(*str==cValue)
	{
	  break;
	}
	i++;
    str++;
  }
  if(*str==cValue)
  {
    return i;
  }
  else
  { 
    return -1;
  }
}