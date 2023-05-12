#include<stdio.h>
float const pi=3.14;

int main()
{
	circum();  // function call
	return 0;
}

// function definition

void circum()
{
	float r,c;
	printf("\n Enter the value of radius: ");
	scanf("%f",&r);
	c=2*pi*r;
	printf("\n Circumference of given circle= %f",c);
}
