#include <stdio.h>

int main(void)
{
	int a;
	int u;
	int t;

	printf("enter the accelaration ");
	scanf_s("%d", &a);

	printf("enter the initial velocity ");
	scanf_s("%d", &u);

	printf("enter the time ");
	scanf_s("%d", &t);

	int finalvelocity;
	finalvelocity = u + a * t;
	printf("The finalvelocty is: %d\n", finalvelocity);

	int s;
	s = u * t + (1 / 2) * a * (t * t);
	printf("The travaled distance is: %d", s);
}
