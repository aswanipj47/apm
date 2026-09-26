/*
Name     : Aswani P J
Roll No  : CS07
Date     : 28-07-2026
Expt. No : 6 (Part 1 - Pascal's Triangle)
Heading  : Dynamic Data Display (Pascal's Triangle and Patterns)
Aim      : Develop an application that displays Pascal's Triangle dynamically based on user input for the number of rows. Also, create a pattern generator (e.g., number or star pattern) that can be customized with user input.
Algorithm :
  Step 1 : Start.
  Step 2 : Read number of rows n.
  Step 3 : For i = 0 to n-1:
             - Print (n-i-1) spaces.
             - Set r = 1; for j = 0 to i compute r = r*(i-j)/(j+1) and print it.
  Step 4 : Stop.
Source Code : Given below.
*/
#include<stdio.h>
int main(){
  int i,j,n,r;
  printf("enter the number of rows:");
  scanf("%d",&n);
  for(i=0;i<n;i++)

  {
    for(j=0;j<n-i-1;j++)
    {

    printf(" ");
   }
    r=1;
    for(j=0;j<=i;j++)

    {
     printf("%d ",r);
     r=r*(i-j)/(j+1);

    }
    printf("\n");
  }
  return 0;
}
/*
Sample Output :
enter the number of rows:5
    1
   1 1
  1 2 1
 1 3 3 1
1 4 6 4 1
*/
