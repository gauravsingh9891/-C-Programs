#include<stdio.h>
#include<conio.h>
main(void)
{ int p,r,t,SI;
  printf("Please Enter the price :");
  scanf("%d",&p);
  printf("Please Enter the rate :");
  scanf("%d",&r);
  printf("Please Enter the time :");
  scanf("%d",&t);
  SI=p*r*t/100;
  printf("the simple interst is : %d",SI);
  getch();
	
}
	
	

