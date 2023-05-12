#include<stdio.h>
void main()
{
	float f,c;
	printf("Enter fahrenheit temp: ");
	scanf("%f",&f);
	c=(f-32)*5/9;
	printf("Given temp to celcius is: %f",c);
}
