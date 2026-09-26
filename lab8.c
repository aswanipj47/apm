/*
Name     : Aswani P J
Roll No  : CS07
Date     : 14-08-2026
Expt. No : 8
Heading  : Matrix Multiplication for Image Processing
Aim      : Implement matrix multiplication to apply a transformation matrix to an image. The program should accept a 2D image matrix and a transformation matrix, then output the transformed image.
Algorithm :
  Step 1 : Start.
  Step 2 : Read r1,c1 and matrix a; read r2,c2 and matrix b.
  Step 3 : If c1 != r2, display "Not possible" and stop.
  Step 4 : For i = 0 to r1-1, for j = 0 to c2-1:
             Set c[i][j] = sum(a[i][k]*b[k][j]) for k = 0 to c1-1.
  Step 5 : Display result matrix c.
  Step 6 : Stop.
Source Code : Given below.
*/
  #include<stdio.h>
  int main(){
    int i,j,a[10][10],b[10][10],r1,r2,c1,c2;
    int k,c[10][10];
    printf("Enter the noof rows and cols of 1st matrix\n");
    scanf("%d %d",&r1,&c1);
    printf("Enter the data\n");
    for(i=0;i<r1;i++){
      for(j=0;j<c1;j++)
      scanf("%d",&a[i][j]);
    }
    printf("Enter the noof rows and cols of 2nd matrix\n");
    scanf("%d %d",&r2,&c2);
    printf("Enter the data\n");
    for(i=0;i<r2;i++){
      for(j=0;j<c2;j++)
        scanf("%d",&b[i][j]);
    }
    if(c1!=r2){
      printf("Not possible because c1=r2\n");
      return 0;
    }
    printf("Matrix multiplication\n");
    for(i=0;i<r1;i++){
      for(j=0;j<c2;j++){
        c[i][j]=0;
        for(k=0;k<c1;k++){
          c[i][j]+=a[i][k]*b[k][j];
        }}  }
    for(i=0;i<r1;i++){
      for(j=0;j<c2;j++)
        printf("%d\t",c[i][j]);
      printf("\n");
  }
    return 0;
 }
/*
Sample Output :
Enter the noof rows and cols of 1st matrix
2 2
Enter the data
1 2
3 4
Enter the noof rows and cols of 2nd matrix
2 2
Enter the data
5 6
7 8
Matrix multiplication
19	22
43	50
*/
