#include<stdio.h>
int main()
{
	char x;
	printf("Enter a value: ");
	scanf("%c",&x);
	if((x>=65 && x<=90) || (x>=97 && x<=122))
	printf("Given value is alphabet");
	else if(x>=48 && x<=57)
	printf("Given value is a number");
	else
	printf("Given value is a special character");
	
	return 0;
}
