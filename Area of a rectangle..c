#include<stdio.h>
int main()
{
	float lenght,width,area;
	printf("Enter length & width of rectangle(in cm):");
	scanf("%f%f",&lenght,&width);
	area=lenght*width;
	printf("Area of rectangle=%.3f cm\n",area);
	return 0;
}
