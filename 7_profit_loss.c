#include<stdio.h>
int main()
{
	int sp,cp,profit,loss;
	printf("Enter the selling price and cost price resp.: ");
	scanf("%d%d",&sp,&cp);
	
	if(sp>cp)
	{
	profit=sp-cp;
	printf("Profit=%d",profit);
	}	
	
	else if(cp>sp)
	{
	loss=cp-sp;
	printf("Loss=%d",loss);
	}
	
	return 0;
}
