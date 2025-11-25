	#include<stdio.h>
int main()
{
	int num1,num2;
	int sum,difference;
	printf("Enter first number:");
	scanf("%d",&num1);
	printf("Enter second number:");
	scanf("%d",&num2);
	sum=num1+num2;
	difference=num1-num2;
	printf("\nSum of %d and %d=%d\n",num1,num2,sum);
	printf("Difference of %d and %d=%d\n",num1,num2,difference);
	return 0;
}
