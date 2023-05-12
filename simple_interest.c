#include<stdio.h>
void main()
{
	float p,t,r,s_i;
	printf("Enter values of principal_amount,time and rate resp.: ");
	scanf("%f%f%f",&p,&t,&r);
	s_i= (p*r*t)/100;
	printf("Simple Interest= %f ",s_i);
}
