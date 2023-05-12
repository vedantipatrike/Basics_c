#include<stdio.h>
int main()
{
	int n10,n50,n100,n500,n1000,amount;
	printf("Enter Amount: ");//1230
	scanf("%d",&amount);
	printf("Total no.of notes:\n");
	if(amount>=1000)
	{
		n1000=amount/1000;//1
		amount=amount-n1000*1000;//230
		printf("1000 = %d\n",n1000);
	}
	if(amount>=500)
	{
		n500=amount/500;
		amount=amount-n500*500;
		printf("500 = %d\n",n500);
	}
	if(amount>=100)
	{
		n100=amount/100;
		amount=amount-n100*100;
		printf("100 = %d\n",n100);
	}
	if(amount>=50)
	{
		n50=amount/50;
		amount=amount-n50*50;
		printf("50 = %d\n",n50);

	}
	if(amount>=10)
	{
		n10=amount/10;
		amount=amount-n10*10;
		printf("10 = %d\n",n10);
	}
	
	return 0;
}
