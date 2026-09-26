/*
Name     : Aswani P J
Roll No  : CS07
Date     : 24-09-2026
Expt. No : 15
Heading  : Complex Number Calculator for Engineering Simulations
Aim      : Develop a program that allows the user to input two complex numbers and calculates their sum and difference. This program could be applied in simulations for electrical engineering or physics problems.
Algorithm :
  Step 1 : Start.
  Step 2 : Read real and imaginary parts of two complex numbers into c[0], c[1].
  Step 3 : Compute sum: s.real = c[0].real + c[1].real,
                       s.img  = c[0].img + c[1].img.
  Step 4 : Compute difference: d.real = c[0].real - c[1].real,
                               d.img  = c[0].img - c[1].img.
  Step 5 : Display sum and difference.
  Step 6 : Stop.
Source Code : Given below.
*/
#include<stdio.h>
struct complex{
  int real;
  int img;
}c[2],s,d;
int main()
{
  int i;
  for(i=0;i<2;i++)
  {
    printf("enter real and imaginary parts\n");
    scanf("%d%d",&c[i].real,&c[i].img);
  }
  s.real=c[0].real+c[1].real;
  s.img=c[0].img+c[1].img;
  d.real=c[0].real-c[1].real;
  d.img=c[0].img-c[1].img;
  printf("sum of complex numbers\n");
  printf("%d+i%d",s.real,s.img);
  printf("\ndifference of complex numbers\n");
  printf("%d+i%d",d.real,d.img);
  return 0;
}
/*
Sample Output :
enter real and imaginary parts
3 4
enter real and imaginary parts
5 6
sum of complex numbers
8+i10
difference of complex numbers
-2+i-2
*/
