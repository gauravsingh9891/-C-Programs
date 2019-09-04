#include<stdio.h>
#include<conio.h>
main(void)
{
  float a,b,p;
  printf("Please Enter the outcome :");
  scanf("%f",&a);
  printf("Please Enter the total :");
  scanf("%f",&b);
  p=a*100/b;
  printf("the Percentage is :%f",p);
  getch();	
}
