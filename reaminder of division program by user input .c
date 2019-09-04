#include<stdio.h>
#include<conio.h>
main(void)
{
  int a,b,div,rem;
  printf("Please enter the first number :");
  scanf("%d",&a);
  printf("Please enter the second number :");
  scanf("%d",&b);
  div=a/b;
  rem=a%b;
  printf("The division is : %d \n",div);
  printf("The remainder is : %d \n",rem);
  getch();
}
