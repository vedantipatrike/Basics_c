#include<stdio.h>
int main()
{
	int n;
	printf("Enter a no: ");
	scanf("%d",&n);
	if(n==0)
	printf("Given no is Zero");
	else if(n>0)
	printf("Given no is Positive");
	else
	printf("Given no is Negative");
	return 0;
}
