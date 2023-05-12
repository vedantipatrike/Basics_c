#include<stdio.h>
int main()
{
	char x;
	printf("Enter a value: ");
	scanf("%c",&x);
	if(x>='a' && x<='z')  
	printf("Given value is Lowercase");
	else if(x>='A' && x<='Z')
	printf("Given value is a Uppercase");
	else
	printf("Invalid Input");
	
	return 0;
}
