#include<stdio.h>
void main()
{
	int n1,n2,add,sub,mul,div,modulo;
	printf("Enter two values: ");
	scanf("%d%d",&n1,&n2);
	
	add=n1+n2;
	sub=n1-n2;
	mul=n1*n2;
	div=n1/n2;
	modulo=n1%n2;
	
	printf("\nAddiotion= %d",add);
	printf("\nSubtraction= %d",sub);
	printf("\nMultiplication= %d",mul);
	printf("\nDivision= %d",div);
	printf("\nModulo/Remainder= %d",modulo);
	
}
