#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	float loan_principal, loan_day, interest_charge, rate;
	int i;
	for ( i = 0; i > -1; i++)
	{
		printf("Enter loan principal:  ");
		scanf_s("%f", &loan_principal);
		if (loan_principal == -1)
		{
			break;
		}
		printf("Enter interest rate:  ");
		scanf_s("%f", &rate);
		printf("Enter term of the loan in days:  ");
		scanf_s("%f", &loan_day);
		interest_charge = loan_principal * rate * loan_day / 365;
		printf("The interest charge is $%.2f\n\n", interest_charge);
	}
	system("pause");
	return 0;
}