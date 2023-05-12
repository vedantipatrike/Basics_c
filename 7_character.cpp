#include<stdio.h>
int main()
{
	char x;
	printf("Enter value: ");
	scanf("%c",&x);
	if((x>='a' && x<='z') || (x>='A' && x<='Z'))
	printf("%c is a character.",x);
	else
	printf("%c is not a character.",x);
	
	return 0;
}
