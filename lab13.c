/*
Name     : Aswani P J
Roll No  : CS07
Date     : 09-09-2026
Expt. No : 13
Heading  : Text Editor: Substring Insertion
Aim      : Create a text editor program that allows a user to insert a given substring at a specified position within an existing string of text. This tool can help in editing and updating documents or code.
Algorithm :
  Step 1 : Start.
  Step 2 : Read main string str, substring sub and position p.
  Step 3 : Find lengths l and subl using strlen.
  Step 4 : Shift characters of str to the right to make space for sub.
  Step 5 : Copy sub into str starting at position p.
  Step 6 : Display the string after insertion.
  Step 7 : Stop.
Source Code : Given below.
*/
#include<stdio.h>
#include<string.h>
int main()
{
  int p,i,l,subl;
  char str[50],sub[20];
  printf("enter string:\n");
  scanf("%s",str);
  printf("enter substring:\n");
  scanf("%s",sub);
  printf("enter position:\n");
  scanf("%d",&p);
  l=strlen(str);
  subl=strlen(sub);
  for(i=1;i>=p;i--)
    str[i+subl]=str[i];
  for(i=0;i<subl;i++)
    str[p+i]=sub[i];
  printf("after insertion  %s",str);
  return 0;
}
/*
Sample Output :
enter string:
hello
enter substring:
XX
enter position:
2
after insertion  heXXo
*/
