/*
Name     : Aswani P J
Roll No  : CS07
Date     : 21-08-2026
Expt. No : 11
Heading  : String Manipulation Utility
Aim      : Create an application that implements a suite of string functions like concatenation, comparison, and conversion (uppercase to lowercase), which can be applied to a list of user-provided strings.
Algorithm :
  Step 1 : Start.
  Step 2 : Read two strings str1 and str2.
  Step 3 : Concatenate using strcat(str1,str2) and display result.
  Step 4 : Compare using strcmp and display whether same or different.
  Step 5 : Convert to lowercase using tolower() in convert() and display.
  Step 6 : Stop.
Source Code : Given below.
*/
#include<stdio.h>
#include<string.h>
#include<ctype.h>
void convert(char str[])
{
  int i;
  for(i=0;str[i]!='\0';i++)
    str[i]=tolower(str[i]);
    printf("after conversion:%s",str);
}
int main()
{
  char str1[20],str2[20];
  int c;
  printf("enter 1st string:");
  scanf("%s",str1);
  printf("enter 2nd string:");
  scanf("%s",str2);
  strcat(str1,str2);
  printf("after concatenation %s\n", str1);
  printf("after comparsion");
  c=strcmp(str1,str2);
  if(c==0)
    printf("2 strings are same");
        else
    printf("strings are different");
        convert(str1);
        return 0;
}
/*
Sample Output :
enter 1st string:Hello
enter 2nd string:World
after concatenation HelloWorld
after comparsionstrings are differentafter conversion:helloworld
*/
