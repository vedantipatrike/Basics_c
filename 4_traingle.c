#include<stdio.h>
int main()
{
	int a,b,c,x;
	printf("Enter 3 angles of the triangle: ");
	scanf("%d%d%d",&a,&b,&c);
	x=a+b+c;
	if((a>0)&&(b>0)&&(c>0))
	{
		if(x==180)
		printf("Given Triangle is valid.");
		else
		printf("Given Triangle is not valid.");
		
		return 0;
   	}
   	else
   	printf("Sides of traingle can not be 0");
}
