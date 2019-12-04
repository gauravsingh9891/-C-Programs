#include<stdio.h>
#include<conio.h>
main()
{
	float a,b,sum,sub,divide,multiplication;
	printf("Please Enter the first number :");
	scanf("%f",&a);
	printf("Please Enter the second number :");
	scanf("%f",&b);
    sum=a+b;
    sub=a-b;
    divide=a/b;
    multiplication=a*b;
	printf("the sum is : %f \n",sum);
	printf("the subtraction is : %f \n",sub);
	printf("the divide is : %f \n",divide);
	printf("the multiply is : %f \n",multiplication);
	getch();
}
