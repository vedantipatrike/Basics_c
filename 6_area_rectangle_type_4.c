#include<stdio.h>
int main()
{
	convert();  // function call
	return 0;
}

// function definition

void convert()
{
	int l,b,rec;
	printf("\n Enter the values of length and breadth: ");
	scanf("%d%d",&l,&b);
	rec=l*b;
	printf("\n Area of given rectangle= %d",rec);
}
