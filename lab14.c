/*
Name     : Aswani P J
Roll No  : CS07
Date     : 11-09-2026
Expt. No : 14
Heading  : Recursion-Based Sentence Reversal for Voice Transcription
Aim      : Write a program that reverses the words of a sentence, using recursion. This could be applied in a speech-to-text application where the order of words needs to be reversed for analysis.
Algorithm :
  Step 1 : Start.
  Step 2 : Read a sentence using fgets and remove trailing newline.
  Step 3 : Call reversewords(str,0,0):
             - Find end of current word (space or '\0').
             - Recursively call for next word if space found.
             - On return, print current word.
  Step 4 : Stop.
Source Code : Given below.
*/
#include<stdio.h>
void reversewords(char str[],int start,int end)
{
  int i;
  if(str[start]=='\0')
    return;
  for(i=start;str[i]!=' '&&str[i]!='\0';i++);
  if(str[i]==' ')
    reversewords(str,i+1,end);
  for(int j=start;j<i;j++)
    printf("%c",str[j]);
  if(start!=0)
    printf(" ");
}
int main()
{
  char str[100];
  printf("enter a sentence:");
  fgets(str,100,stdin);
  for(int i=0;str[i]!='\0';i++)
  {
    if(str[i]=='\n')
    {
      str[i]='\0';
      break;
    }
  }
  printf("reversed word order:");
  reversewords(str,0,0);
  printf("\n");
  return 0;
}
/*
Sample Output :
enter a sentence:hello world from C
reversed word order:C from world hello
*/
