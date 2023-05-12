#include<stdio.h>
int main()
{
	int i,n,fact;
	printf("Enter a no: ");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		fact=fact*i;
	}
	printf("Factorial of %d is %d",n,fact);
	
	return 0;
}
