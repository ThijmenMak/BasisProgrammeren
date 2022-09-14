#include <stdio.h>

int main(void)
{
	int a;
	int b;
	int c;

	printf("Enter three different integers: ");
	scanf_s("%d%d%d", &a, &b, &c);

	int sum;
		sum=a+b+c;
	printf("Sum is %d\n", sum);
	
	int avg;
	avg = (a + b + c) / 3;
	printf("Average is %d\n", avg);

	int product;
	product = a * b * c;
	printf("Product is %d\n", product);

	int smallest;
	smallest = a;

	if (b < smallest) {
		smallest = b;
	}
	if (c < smallest) {
		smallest = c;
	}
	printf("smallest is %d\n", smallest);

	
	int largest;
	largest = a;

	if (b > largest) {
		largest = b;
	}
	if (c > largest) {
		largest = c;
	}
	printf("largest is %d", largest);
}