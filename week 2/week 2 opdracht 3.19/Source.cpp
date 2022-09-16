#include <stdio.h>

int main(void)
{
	float principal;
	float rate;
	int days;
	float interest;

	printf("Enter loan principal (-1 to end): ");
	scanf_s("%.2f\n", &principal);

	while (principal != -1) {
		printf("Enter interest rate: ");
		scanf_s("%.1f\n", &rate);
		printf("Enter term of the loan in days: ");
		scanf_s("%d", &days);
		interest = principal * rate * (days / 365);
		printf("The interest charge is: %.2f\n\n", interest);
		printf("Enter loan principal (-1 to end): ");
		scanf_s("%.2f\n", &principal);
	}

}



