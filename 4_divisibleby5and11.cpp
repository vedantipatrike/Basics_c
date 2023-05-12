#include<stdio.h>
int main()
{
	int n;
	printf("Enter a no: ");
	scanf("%d",&n);
	if(n%5==0 && n%11==0)
	printf("Given no is divisible by both 5 and 11");
	else
	printf("Given no is not divisible by both 5 and 11");
	return 0;
}
