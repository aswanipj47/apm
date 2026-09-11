#include<stdio.h>
int main()
{
  int n,num,i,j;
  int prime[100],count=0;
  int isprime;
  printf("enter the number of elements");
  scanf("%d",&n);
  printf("enter %d number :\n",n);
  for(i=0;i<n;i++)
  {
    scanf("%d",&num);
    isprime=1;
      if(num<=1)
      {
        isprime=0;
      }
      else
      {
        for(j=2;j<=num/2;j++)
        {
          if(num%j==0)
          {
            isprime=0;
              break;
          }
        }
      }
    if(isprime)
    {
      prime[count]=num;
      count++;
    }
  }
  printf("prime numbers are:");
  for(i=0;i<count;i++)
  {
    printf("%d\n",prime[i]);
  }
  printf("\n");
  return 0;
}




