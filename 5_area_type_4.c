#include<stdio.h>
float const pi=3.14;
int main()
{
	area();  // function call
	return 0;
}

// function definition

void area()
{
	float a,r;
	printf("\n Enter radius: ");
	scanf("%f",&r);
	a=pi*r*r;
	printf("\n Area=%f",a);
}
