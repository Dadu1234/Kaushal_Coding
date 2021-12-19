#include<stdio.h>
#include<stdbool.h>
bool ChkCapital(char);
int main()
{ 
  bool bRet = false;
  char ch = '\0';
  
  printf("Enter a character\n");
  scanf("%c",&ch);
  
  bRet = ChkCapital(ch);
  
  if(bRet==true)
  {
    printf("Character is capital\n");
  }
  else
  {
    printf("Not a capital\n");
  }
  
  return 0;
}

bool ChkCapital(char cValue)
{
  if((cValue>='A') && (cValue<='Z'))
  {
    return true;
  }
  else
  {
    return false;
  }
}