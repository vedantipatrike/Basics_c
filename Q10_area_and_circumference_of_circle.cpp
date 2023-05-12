#include<stdio.h>
void main()
{
	float a,r,pi=3.14,c;
	printf("Enter value of radius: ");
	scanf("%f",&r);
	a=pi*r*r;
	c=2*pi*r;
	printf("\nArea of given circle is: %f",a);
	printf("\nCiccumference of given circle is: %f",c);
}
