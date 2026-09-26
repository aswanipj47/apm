/*
Name     : Aswani P J
Roll No  : CS07
Date     : 09-07-2026
Expt. No : 4
Heading  : Palindrome Checker for Database Records
Aim      : Write a program to check if a given set of product codes (stored as strings in a database) are palindromes, and generate a report of the results.
Algorithm :
  Step 1 : Start.
  Step 2 : Read n product codes into array product.
  Step 3 : For each code:
             - Reverse the string manually.
             - Compare original and reversed using strcmp.
             - If equal, report palindrome, else not palindrome.
  Step 4 : Stop.
Source Code : Given below.
*/
#include<stdio.h>
#include<string.h>
int main()
{
  int n,i,j,len,palindrome;
  char product[20][50],rev[50];
  printf("Enter the number of product codes\n");
  scanf("%d",&n);
  printf("Enter the product codes:\n");
  for(i=0;i<n;i++){
  scanf("%s",product[i]);
  }
  printf("-----product report------\n");
for(i=0;i<n;i++)
{
  len=strlen(product[i]);
  for(j=0;j<len;j++)
  {
    rev[j]=product[i][len-j-1];
  }
  rev[len]='\0';
  palindrome=strcmp(product[i],rev);
  if(palindrome==0)
    printf("%s:palindrome\n",product[i]);
  else
    printf("%s:not palindrome\n",product[i]);
}
return 0;
}
/*
Sample Output :
Enter the number of product codes
3
Enter the product codes:
madam
hello
121
-----product report------
madam:palindrome
hello:not palindrome
121:palindrome
*/
