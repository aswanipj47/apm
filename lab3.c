/*
Name     : Aswani P J
Roll No  : CS07
Date     : 07-07-2026
Expt. No : 3
Heading  : Efficient Prime Number Generation
Aim      : Implement the Sieve of Eratosthenes algorithm to generate a list of prime numbers up to a specified upper limit (e.g., 10,000). This list will be used for efficient lookups in a mathematical application.
Algorithm :
  Step 1 : Start.
  Step 2 : Create array prime[0..max] and initialise all to 1 (true).
  Step 3 : Set prime[0] = prime[1] = 0.
  Step 4 : For i = 2 to sqrt(max):
             If prime[i] is 1, mark all multiples from i*i as 0.
  Step 5 : Display all indices i with prime[i] = 1.
  Step 6 : Stop.
Source Code : Given below.
*/
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
/*
Sample Output (truncated) :
prime numbers up to 10000 are;
2
3
5
7
11
13
17
19
23
29
31
...
9719
9721
9733
9739
9743
9749
9767
9769
9781
9787
9791
9803
9811
9817
9829
9833
9839
9847
9851
9857
9859
9871
9883
9887
9901
9907
9923
9929
9931
9941
9949
9967
9973
*/
