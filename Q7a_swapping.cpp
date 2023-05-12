#include<stdio.h>
int main()
{
	int n1,n2,t;
	printf("Enter two no.s: ");
	scanf("%d%d",&n1,&n2);
	printf("\nn1= %d",n1);
	printf("\nn2= %d",n2);
	
	t=n1;
	n1=n2;
	n2=t;
	
	printf("\nAfter swapping:\nn1= %d",n1);
	printf("\nn2= %d",n2);
	
}
//why only int main()....why not void working
