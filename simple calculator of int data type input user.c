#include<stdio.h>
#include<conio.h>
main(void)
{
	int a,b,sum,sub,divide,multiplication;
	printf("Please Enter the first number :");
	scanf("%d",&a);
	printf("Please Enter the second number :");
	scanf("%d",&b);
    sum=a+b;
    sub=a-b;
    divide=a/b;
    multiplication=a*b;
	printf("the sum is : %d \n",sum);
	printf("the subtraction is : %d \n",sub);
	printf("the divide is : %d \n",divide);
	printf("the multiply is : %d \n",multiplication);
	getch();
}
