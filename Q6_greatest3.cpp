#include<stdio.h>
int main()
{
	int n1,n2,n3,rslt;
	printf("Enter three no.s: ");
	scanf("%d%d%d",&n1,&n2,&n3);
	
	rslt=(n1>n2) ? ((n1>n3)?n1:n3):((n2>n3)?n2:n3);
	printf("Greater values is: %d",rslt);
	
	return 0;
	
}

//why void not working........
