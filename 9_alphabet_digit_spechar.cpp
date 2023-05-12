#include<stdio.h>
int main()
{
	char x;
	printf("Enter a value: ");
	scanf("%c",&x);
	if((x>='a' && x<='z') || (x>='A' && x<='Z'))
	printf("Given value is alphabet");
	else if(x>='0' && x<='9')
	printf("Given value is a number");
	else
	printf("Given value is a special character");
	
	return 0;
}
