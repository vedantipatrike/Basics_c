#include<stdio.h>
int main()
{
	int i,j,n;
	printf("Enter a no: ");
	scanf("%d",&n);
	
	for(i=i;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
			if((i%2)!=0)
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
