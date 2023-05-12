#include<stdio.h>
int main()
{
	int a,b,c,ch;
	printf("Enter 3 sides of the traingle: ");
	scanf("%d%d%d",&a,&b,&c);
	
	if(a>0 && b>0 && c>0)
	{
	
		if((a==b)&&(b==c))
		printf("\nGiven traigle is Equilateral");
		
		else if((a!=b)&&(b!=c))
		printf("\nGiven traigle is Scalene");
		
		else if(a==b || a==c || b==c)
		printf("\nGiven traigle is Isosceles");
		
	}
	else
	printf("Sides of traingle can not be 0");
	
	return 0;
}
