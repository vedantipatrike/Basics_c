#include<stdio.h>
int main()
{
	int i,n,c=0;
	printf("Enter a no: ");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		if(n%i==0)
		{
			c++;
		}	
	}
	if(c==2)
	{
		printf("%d is prime no.",n);
	}
	else
	{
		printf("%d is not prime no.",n);
	}
	
	return 0;
}
