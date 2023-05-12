#include<stdio.h>
int main()
{
	cube();  // function call
	return 0;
}

// function definition

void cube()
{
	int a,cu;
	printf("\n Enter a no: ");
	scanf("%d",&a);
	cu=a*a*a;
	printf("\n Cube=%d",cu);
}
