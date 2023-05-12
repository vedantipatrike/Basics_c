#include<stdio.h>
int main()
{
	float time,dist,speed;
	printf("Enter values of time and distance resp: ");
	scanf("%f%f",&time,&dist);
	
	speed= dist/time;
	printf("Speed= %f",speed);
}
