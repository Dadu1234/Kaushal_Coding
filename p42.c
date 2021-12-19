////////////////////////////////////////////////////////////////////////////
// WAP TO REVERSE A STRING.
////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
void StrrevX(char[]);
int main()
{
  char Arr[30];
  
  printf("Enter a string\n");
  scanf("%[^'\n']s",Arr);
  
  StrrevX(Arr);
  
  return 0;
}
void StrrevX(char Str[])
{
  char temp = '\0';
  int i = 0;
  int iStart = 0;
  int iEnd = 0;
                                                           
  while(Str[iEnd]!='\0')
  {
    iEnd++;
  }
  iEnd--;                                                                                                    
  
  while(iStart<iEnd)
  {
     temp = Str[iStart];
     Str[iStart] = Str[iEnd];
     Str[iEnd] = temp;
	 
	 iStart++;
	 iEnd--;
  }
  
  printf("Reverse of string is %s\n",Str);
  
 
}
                                                                                                                                              
         
