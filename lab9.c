/*
Name     : Aswani P J
Roll No  : CS07
Date     : 18-08-2026
Expt. No : 9
Heading  : Symmetry Checker for Geometric Designs
Aim      : Develop a program to check if a given design (represented as a matrix) is symmetric. This program can be useful for analyzing symmetry in architectural or geometric design patterns.
Algorithm :
  Step 1 : Start.
  Step 2 : Read rows r and columns c.
  Step 3 : If r != c, display "Matrix is not symmetry" and stop.
  Step 4 : Read matrix mat.
  Step 5 : For all i,j, if mat[i][j] != mat[j][i], display "Not symmetry" and stop.
  Step 6 : Otherwise display "Symmetry".
  Step 7 : Stop.
Source Code : Given below.
*/
 #include<stdio.h>
  int main(){
    int i,j,c,r,mat[10][10];
    printf("Enter the noof rows and cols\n");
    scanf("%d %d",&r,&c);
    if(r!=c){
      printf("Matrix is not symmetry\n");
      return 0;
  }
    printf("Enter the elemnts of matrix\n");
    for(i=0;i<r;i++){
      for(j=0;j<c;j++)
        scanf("%d",&mat[i][j]);
    }
    for(i=0;i<r;i++){
      for(j=0;j<c;j++){
        if(mat[i][j]!=mat[j][i]){
          printf(" Not symmetry\n");
          return 0;
        }
      }
    }
   printf("Symmetry\n");
    return 0;
  }
/*
Sample Output 1 (Symmetric) :
Enter the noof rows and cols
3 3
Enter the elemnts of matrix
1 2 3
2 1 4
3 4 1
Symmetry

Sample Output 2 (Not Symmetric) :
Enter the noof rows and cols
2 2
Enter the elemnts of matrix
1 2
3 4
 Not symmetry
*/
