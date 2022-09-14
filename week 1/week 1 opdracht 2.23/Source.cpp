#include <stdio.h>

int main(void)
{
	int a;
	int b;
	int c;

	printf("enter three numbers: ");
	scanf_s("%d%d%d", &a, &b, &c);
	int smallest;
	int largest;
	largest = a;

	if (b > largest) {
		largest = b;
	}
	if (c > largest) {
		largest = c;
	}
	printf("The largest number is: %d\n", largest);
	
	smallest = a;
	if (b < smallest) {
		smallest=b;
	}
	if (c < smallest) {
		smallest = c;
	}
	printf("The smallest number is: %d", smallest);

}