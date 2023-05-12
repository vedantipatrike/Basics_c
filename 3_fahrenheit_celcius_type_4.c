#include<stdio.h>
int main()
{
	convert();  // function call
	return 0;
}

// function definition

void convert()
{
	int f,c;
	printf("\n Enter the value: ");
	scanf("%d",&f);
	c=((f-32)*5)/9;
	printf("\n %d fahrenheit = %d celsius",f,c);
}
