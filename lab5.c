/*
Name     : Aswani P J
Roll No  : CS07
Date     : 20-07-2026
Expt. No : 5
Heading  : Data Cleaning Utility: Remove Duplicates
Aim      : Create a program that takes a list of customer email addresses (stored in an array) and removes any duplicates, ensuring that each email address is only represented once.
Algorithm :
  Step 1 : Start.
  Step 2 : Read n email addresses into array email.
  Step 3 : For each i, compare with all j > i using strcmp.
           If duplicate found, shift remaining elements left and decrement n.
  Step 4 : Display the unique email addresses.
  Step 5 : Stop.
Source Code : Given below.
*/
#include<stdio.h>
#include<string.h>
int main()
{
  int n,j,i,k;
  char email[100][100];
  printf("enter the no of customers:");
  scanf("%d",&n);
  printf("enter the email address:");
  for(i=0;i<n;i++)
  {
  scanf("%s",email[i]);
  }
  for(i=0;i<n;i++)
  {
    for(j=i+1;j<n;j++)
    {
      if(strcmp(email[i],email[j])==0)
          {
          for(k=j;k<n-1;k++)
          {
          strcpy(email[k],email[k+1]);
          }
          n--;
          j--;
          }
          }
          }
          printf("\nunique email addresses:\n");
          for(i=0;i<n;i++)
          {
          printf("%s\n",email[i]);
          }
          return 0;
          }
/*
Sample Output :
enter the no of customers:4
enter the email address:a@test.com
b@test.com
a@test.com
c@test.com

unique email addresses:
a@test.com
b@test.com
c@test.com
*/
