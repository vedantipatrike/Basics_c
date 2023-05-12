#include<stdio.h>
int main()
{
	int e,tot;
	printf("Enter electricity unit charges: ");
	scanf("%d",&e);
	
	if(e>0)
	{
		if(e<=50)
		printf("Total electricity bill: 0.70/unit");
		else if(e<=150)
		printf("Total electricity bill: 0.95/unit");
		else if(e<=250)
		printf("Total electricity bill: 1.40/unit");
		else if(e>250)
		printf("Total electricity bill: 1.70/unit");
		
		return 0;
 	}
 	else
	printf("Enter valid i/p");
}
