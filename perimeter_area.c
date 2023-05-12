#include<stdio.h>
void main()
{
	float sq_peri,sq_area,rec_peri,rec_area,length,breadth,width,side;
	printf("Enter side of square:");
	scanf("%f",&side);
	sq_peri=4*side;
	sq_area=side*side;
	
	printf("Enter length,breadth and width of rectangle resp.: ");
	scanf("%f%f%f",&length,&breadth,&width);
	
	rec_peri=2*(length+breadth);
	rec_area=length*width;
	
	
	printf("\nPerimeter of Square is: %f",sq_peri);
	printf("\nPerimeter of Rectangle is: %f ",rec_peri);
	printf("\nArea of Square is: %f",sq_area);
	printf("\nArea of Rectangle is: %f ",rec_area);
	
}
