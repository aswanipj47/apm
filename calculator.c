#include<stdio.h>
int main()
{
  int a,b,ch;
  printf("1.addittion\n");
  printf("2.substraction\n");
  printf("3.multiplication\n");
  printf("4.division\n");
  printf("5.modulus\n");
  printf("enter the your choice:");
  scanf("%d",&ch);
  printf("enter two numbers:");
  scanf("%d%d",&a,&b);
  switch(ch)
  {
   case 1:printf("addittion=%d",a+b);
    break;
   case 2:printf("substraction=%d",a-b);
    break;
   case 3:printf("multiplication=%d",a*b);
    break;
   case 4:printf("division=%d",a/b);
    break;
   case 5:printf("modulus=%d",a%b);
    break;
    default:printf("invalid choice");
  }
  return 0;
}



