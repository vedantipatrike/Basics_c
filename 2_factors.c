#include<stdio.h>
int main()
{
	int i,n;
	printf("Enter a no: ");
	scanf("%d",&n);
	printf("All factors of %d are:\n",n);
	
	for(i=1;i<=n;i++)
	{
		if(n%i==0)
		{
			printf("%d\n",i);
			
		}	
	}
	return 0;
}
