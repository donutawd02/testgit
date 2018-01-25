#include <stdio.h>
void main()
{
	float r,a;
	printf("Please enter radius: ");
	scanf("%f",&r);
	a = (4.00/3.00)*(22.00/7.00)*(r*r*r);
	printf("The volume of this sphere is %.2f",a);
}