#include<stdio.h>
int main()
{
	int phy,chem,maths,bio,comp,per,grade,tot;
	printf("Enter marks of physics,chemistry,maths,biology & computer resp:\n");
	scanf("%d%d%d%d%d",&phy,&chem,&maths,&bio,&comp);
	
	tot=phy+chem+maths+bio+comp;
	per=(tot/5);
	printf("Percentage=%d\n",per);
	
	if(per>=90)
	printf("Grade A");
	else if(per>=80)
	printf("Grade B");
	else if(per>=70)
	printf("Grade C");
	else if(per>=60)
	printf("Grade D");
	else if(per>=40)
	printf("Grade E");
	else if(per<40)
	printf("Grade F");
	
	return 0;
}
