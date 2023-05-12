#include<stdio.h>
int main()
{
	int month;
	printf("1:January 2:February 3:March 4:April 5:May 6:June \n7:July 8:August 9:September 10:October 11:November 12:December\n");
	printf("\nEnter the number of the month from 1to12:  ");
	scanf("%d",&month);
	
	switch(month)
	{
		case 1 : printf("January has 31 days");
		    	break;
		case 2 : printf("February has 28/29 days");
		        break;
		case 3 : printf("March has 31 days");
		        break;
		case 4 : printf("April has 30 days");
		        break;
		case 5 : printf("May has 31 days");
		        break;
		case 6 : printf("June has 30 days");
		        break;
		case 7 : printf("July has 31 days");
		        break;
		case 8 : printf("August has 31 days");
		        break;
		case 9 : printf("September has 30 days");
		        break;
		case 10 : printf("October has 31 days");
		        break;
		case 11 : printf("November has 30 days");
		        break;
		case 12 : printf("December has 31 days");
		        break;
		        
		default : printf("Enter i/p from 1 to 12");
		        break;
		      
		
	}
	
	return 0;
}
