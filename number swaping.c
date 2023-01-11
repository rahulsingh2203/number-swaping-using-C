#include<stdio.h>
#include<conio.h>

void main(){
	float a,b,swap;
	printf("Enter value of a:");
	scanf("%f",&a);
	printf("\nEnter value of b:");
	scanf("%f",&b);
	printf("\nBefore Swaping, a = % 0.1f and b = % 0.1f",a,b);
	swap = a;
	a = b;
	b = swap;
	printf("\nAfter Swaping, a = % 0.1f and b = % 0.1f",a,b);
	getch();
}
