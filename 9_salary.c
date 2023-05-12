#include<stdio.h>
int main()
{
	int hra,da,basic,tot;
	printf("Enter your salary: ");
	scanf("%d",&basic);
	
	if(basic<=10000)
	{
		hra=basic*0.2;
		da=basic*0.8;
		tot=basic+hra+da;
		printf("Gross salary=%d",tot);
	}
	else if(basic<=20000)
	{
		hra=basic*0.25;
		da=basic*0.9;
		tot=basic+hra+da;
		printf("Gross salary=%d",tot);
	}
	else if(basic>20000)
	{
		hra=basic*0.3;
		da=basic*0.95;
		tot=basic+hra+da;
		printf("Gross salary=%d",tot);
	}
	return 0;
}

/* gross sal = 
tot=basic+hra+da
hra=basic*0.2
da=basic*0.8*/
