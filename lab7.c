/*
Name     : Aswani P J
Roll No  : CS07
Date     : 03-08-2026
Expt. No : 7
Heading  : Matrix Operations for Financial Modeling
Aim      : Write a program to perform matrix operations that calculate the row sum, column sum, and diagonal sum of a financial transaction matrix. Additionally, include a function to transpose the matrix for further analysis.
Algorithm :
  Step 1 : Start.
  Step 2 : Read rows r, columns c and matrix a.
  Step 3 : For each row, compute row sum and display it.
  Step 4 : For each column, compute column sum and display it.
  Step 5 : Compute trace (sum of a[i][j] where i == j) and display it.
  Step 6 : Call transpose(r,c) to print transpose of matrix.
  Step 7 : Stop.
Source Code : Given below.
*/
  #include<stdio.h>
  int i,j,a[10][10];
    int transpose(int r,int c){
      printf("transpose:\n");
       for(i=0;i<c;i++){
         for(j=0;j<r;j++){
                  printf("%d\t",a[j][i]);
          }
      printf("\n");
       }}
  int main(){
    int rsum,csum,t=0,r,c;
    printf("enter no.of rows and columns\n");
    scanf("%d %d",&r,&c);
    printf("enetr data\n");
    for(i=0;i<r;i++){
      for(j=0;j<c;j++)
        scanf("%d",&a[i][j]);}
  for(i=0;i<r;i++){
          rsum=0;
       for(j=0;j<c;j++){
                  rsum+=a[i][j];}
         printf("sum of row %d is %d\n",i+1,rsum);}
  for(j=0;j<c;j++){
    csum=0;
    for(i=0;i<r;i++){
        csum+=a[i][j];}
    printf("sum of col %d is %d\n",j+1,csum);
  }
  for(i=0;i<r;i++){
           for(j=0;j<c;j++){
             if(i==j)
                  t+=a[i][j];
           }}
  printf("trace= %d\n",t);
  transpose(r,c);
  return 0;}
/*
Sample Output :
enter no.of rows and columns
2 3
enetr data
1 2 3
4 5 6
sum of row 1 is 6
sum of row 2 is 15
sum of col 1 is 5
sum of col 2 is 7
sum of col 3 is 9
trace= 6
transpose:
1	4
2	5
3	6
*/
