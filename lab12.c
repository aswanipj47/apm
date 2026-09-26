/*
Name     : Aswani P J
Roll No  : CS07
Date     : 27-08-2026
Expt. No : 12
Heading  : Text Reversal Tool for Document Review
Aim      : Write a program that checks if a document (string) is a palindrome by reversing it manually without using built-in functions. This tool could be used for reviewing documents that need to maintain symmetry.
Algorithm :
  Step 1 : Start.
  Step 2 : Read string str.
  Step 3 : Find length len manually.
  Step 4 : Build rev by copying characters from end to start.
  Step 5 : Display reversed string.
  Step 6 : Compare str and rev character by character;
           if all equal display palindrome, else not palindrome.
  Step 7 : Stop.
Source Code : Given below.
*/
 #include<stdio.h>
  int main(){
    int i,f=1,len=0;
    char str[100],rev[20];
    printf("Enter the string:");
    scanf("%s",str);
    for(int i=0;str[i]!='\0';i++)
      len++;
    for(i=0;i<len;i++)
      rev[i]=str[len-1-i];
    rev[i]='\0';
     printf("Reverse of string %s\n",rev);
     for(i=0;i<len;i++){
       if(str[i]!=rev[i]){
         f=0;
         break;
        }
      }
      if(f==1){
        printf("it is palindrome\n");
      }
      else
          printf("it is not palindrom\n");
  return 0;
  }
/*
Sample Output 1 :
Enter the string:madam
Reverse of string madam
it is palindrome

Sample Output 2 :
Enter the string:hello
Reverse of string olleh
it is not palindrom
*/
