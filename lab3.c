#include<stdio.h>
#define max 10000
int main(){
  int prime[max+1];
  int i,j;
  for(i=0;i<=max;i++)
  prime[i]=1;
  prime[1]=0;
  prime[0]=0;
  for(i=2;i*i<=max;i++)
  {
    if(prime[i])
    {
      for(j=i*i;j<=max;j+=i)
      {
        prime[j]=0;
      }
    }
  }
  printf("prime numbers up to %d are;\n",max);
  for(i=2;i<=max;i++)
  {
    if(prime[i])
      printf("%d\n",i);
  }
  return 0;
}


