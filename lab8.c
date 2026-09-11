#include<stdio.h>
int main()
{
  int image[10][10],transform[10][10],result[10][10];
  int r1,c1,r2,c2;
  int i,j,k;
  printf("Enter rows and columns of image matrix:");
  scanf("%d %d",&r1,&c1);
  printf("enter image matrix:\n");
  for(i=0;i<r1;i++)
  {
    for(j=0;j<c1;j++)
    {
      scanf("%d",&image[i][j]);
    }
  }
  printf("enter rows and columns of transformation matrix:");
  scanf("%d%d",&r2,&c2);
  printf("enter transformation matrix:\n");
  for(i=0;i<r2;i++)
  {
    for(j=0;j<c2;j++)
    {
      scanf("%d",&transform[i][j]);
      }
  }
  if(c1 !=r2)
  {
    printf("matrix multiplication is not possible.\n");
    return 0;
  }
  for(i=0;i<r1;i+=0)
      {
      for(j=0;j<c2;j++)
      {
        result[i][j]=0;
        for(k=0;k<c1;k++)
        {
          result[i][j]=result[i][j]+image[i][k]*transform[k][j];
        }
      }
      }
  printf("\ntransformed image matrix:\n");
  for(i=00;i<r1;i++)
  {
    for(j=0;j<c2;j++)
    {
      printf("%d",result[i][j]);
    }
    printf("\n");
  }
  return 0;
}

