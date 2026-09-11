#include<stdio.h>
int main()
{
  int a[10][10],b[10][10];
  int i,j,r,c;
  printf("enter rows and columns:");
  scanf("%d%d",&r,&c);
  printf("enter first matrix:\n");
  for(i=0;i<r;i++)
    for(j=0;j<c;j++)
      scanf("%d",&a[i][j]);
  printf("Enter second matrix:\n");
  for(i=0;i<r;i++)
    for(j=0;j<c;j++)
      scanf("%d",&b[i][j]);
  printf("sum of matrices:\n");
  for(i=0;i<r;i++)
  {
    for(j=0;j<c;j++)
        printf("%d",a[i][j]+b[i][j]);
    printf("\n");
  }
  return 0;
}

