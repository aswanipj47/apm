#include<stdio.h>
int main()
{
  char str[100];
  int i=0;
  printf("enter the string:");
  fgets(str,sizeof(str),stdin);
  while ((str[i] !='\0') && (str[i] !='\n')) 
  {
  char ch=str[i];
    switch(ch)
  {
    case'a':
    case'i':
    case'e':
    case'o':
    case'u':
    case'A':
    case'I':
    case'E':
    case'O':
    case'U':
      printf("%c->vowel\n",ch);
      break;
    default:
      if ((ch >= 'A' && ch<= 'Z') || (ch >= 'a' && ch<= 'z'))
  printf("%c->consonant\n",ch);
      else if
      ((ch >='0' && ch<= '9'))
        printf("%c->number\n",ch);
else if(ch != '\n')
  printf("%c->others\n",ch);
  }
    i++;
  }
  return 0;
}



