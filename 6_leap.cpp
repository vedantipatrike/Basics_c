#include<stdio.h>
int main()
{
	int year;
	printf("Enter the year: ");
	scanf("%d",&year);
	if(year%4==0)
	printf("Given year is leap.");
	else
	printf("Given year is not leap.");
	return 0;
	
}
