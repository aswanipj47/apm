/*
Name     : Aswani P J
Roll No  : CS07
Date     : 03-07-2026
Expt. No : 1
Heading  : Character Analysis Tool
Aim      : Write a program to develop a simple text analysis tool that takes an input string and categorizes each character as a vowel, consonant, or other (special character, number, etc.) using a switch statement.
Algorithm :
  Step 1 : Start.
  Step 2 : Read an input string using fgets.
  Step 3 : For each character until '\0' or '\n':
             - Use switch to check for vowels (a,e,i,o,u - both cases).
             - In default, check if alphabet -> consonant,
               else if digit (0-9) -> number,
               else -> others.
  Step 4 : Display the category of each character.
  Step 5 : Stop.
Source Code : Given below.
*/
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
/*
Sample Output :
enter the string:Hello123!
H->consonant
e->vowel
l->consonant
l->consonant
o->vowel
1->number
2->number
3->number
!->others
*/
