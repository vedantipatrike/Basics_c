#include<stdio.h>
int main()
{
	int s1,s2,s3,s4,s5,tot,avg;
	printf("Enter marks of 5 subjects: ");
	scanf("%d%d%d%d%d",&s1,&s2,&s3,&s4,&s5);
	tot=s1+s2+s3+s4+s5;
	avg=(s1+s2+s3+s4+s5)/5;
	 
	printf("Total= %d",tot);
	printf("\nAverage= %d",avg); 
}
