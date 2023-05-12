#include<stdio.h>
int main()
{
	convert();  // function call
	return 0;
}

// function definition

void convert()
{
	int km,m;
	printf("\n Enter the value: ");
	scanf("%d",&km);
	m=km*1000;
	printf("\n %d km = %d m",km,m);
}
