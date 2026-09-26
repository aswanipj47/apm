/*
Name     : Aswani P J
Roll No  : CS07
Date     : 28-07-2026
Expt. No : 6 (Part 2 - Star Pattern)
Heading  : Dynamic Data Display (Pascal's Triangle and Patterns)
Aim      : Develop an application that displays Pascal's Triangle dynamically based on user input for the number of rows. Also, create a pattern generator (e.g., number or star pattern) that can be customized with user input.
Algorithm :
  Step 1 : Start.
  Step 2 : Fix n = 5 (or read from user).
  Step 3 : For i = 1 to n, for j = 1 to n:
             If i == 1 or i == n or i+j == n+1, print "* ",
             else print spaces.
  Step 4 : Print newline after each row.
  Step 5 : Stop.
Source Code : Given below.
*/
#include<stdio.h>
int main(){
  int i,j,n=5;
  for(i=1;i<=n;i++){
    for(j=1;j<=n;j++)
    {
      if(i==1||i==n||i+j==n+1)
  printf("* ");
      else
        printf("  ");
    }
  printf("\n");
  }
  return 0;
}
/*
Sample Output :
* * * * *
      *
    *
  *
* * * * *
*/
