#include<stdio.h>
int main()
{
	convert();  // function call
	return 0;
}

// function definition

void convert()
{
	int l,b,peri;
	printf("\n Enter the values of length and breadth: ");
	scanf("%d%d",&l,&b);
	peri=2*(l+b);
	printf("\n Perimeter of given rectangle= %d",peri);
}
