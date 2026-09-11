#include<stdio.h>
#include<string.h>
int main()
{
  int n,i,j,len,palindrome;
  char product[20][50],rev[50];
  printf("Enter the number of product codes\n");
  scanf("%d",&n);
  printf("Enter the product codes:\n");
  for(i=0;i<n;i++){
  scanf("%s",product[i]);
  }
  printf("-----product report------\n");
for(i=0;i<n;i++)
{
  len=strlen(product[i]);
  for(j=0;j<len;j++)
  {
    rev[j]=product[i][len-j-1];
  }
  rev[len]='\0';
  palindrome=strcmp(product[i],rev);
  if(palindrome==0)
    printf("%s:palindrome\n",product[i]);
  else
    printf("%s:not palindrome\n",product[i]);
}
return 0;
}


