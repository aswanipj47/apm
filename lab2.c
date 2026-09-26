/*
Name     : Aswani P J
Roll No  : CS07
Date     : 06-07-2026
Expt. No : 2
Heading  : Prime Number Finder for Data Processing
Aim      : Write a program that scans a list of numbers and identifies which ones are prime. It should store the prime numbers separately for further processing.
Algorithm :
  Step 1 : Start.
  Step 2 : Read n (number of elements) and array nums.
  Step 3 : For each number, check divisibility from 2 to num/2.
           If no divisor found and num != 1, store it in prm array.
  Step 4 : Display all stored prime numbers.
  Step 5 : Stop.
Source Code : Given below.
*/
#include<stdio.h>
  int main(){
    int i=0,n=0,nums[10],prm[10];
     int k=0;
     printf("Enter the noof elements:");
    scanf("%d",&n);
    printf("Enter the numbers");
      while(i<n){
        scanf("%d",&nums[i]);
      int num=nums[i];
         int c=0;
          for(int j=2;j<=num/2;j++){
            if(num%j==0){
              c++;
              break;}}
          if(c==0 && num!=1)
            prm[k++]=num;
          i++;}
    for(i=0;i<k;i++)
          printf("%d-prime\n",prm[i]);
    return 0;
  }
/*
Sample Output :
Enter the noof elements:5
Enter the numbers2 3 4 5 6
2-prime
3-prime
5-prime
*/
