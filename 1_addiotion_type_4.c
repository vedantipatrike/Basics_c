#include<stdio.h>
int main()
{
	add();  // function call
	return 0;
}

// function definition

void add()
{
	int a,b,c;
	printf("\n Enter 2 nos: ");
	scanf("%d %d",&a,&b);
	c=a+b;
	printf("\n Sum=%d",c);
}
