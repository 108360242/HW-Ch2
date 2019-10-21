#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	float balance, charges, credits, credit_limit;
	int	account_number, i;
	for ( i = 0; i > -1; i++)
	{
        printf("Enter account number (-1 to end):  ");
		scanf_s("%d", &account_number);
		if (account_number == -1)
		{
			break;
		}
		printf("Enter begining balance:  ");	
		scanf_s("%f", &balance);
		printf("Enter total charges:  ");
		scanf_s("%f", &charges);	
		printf("Enter total credicts:  ");
		scanf_s("%f", &credits);
		printf("Enter credict limit:  ");
		scanf_s("%f", &credit_limit);
		printf("Account:       %d\n", account_number);
		printf("Credit limit:  %.2f\n", credit_limit);
		balance = balance + charges - credits;
		if (balance > credit_limit)
		{
			printf("Balance:       %.2f\n", balance);
			printf("Credit Limit Exceeded.\n\n");
		}
		else
		{
			printf("Balance:       %.2f\n\n", balance);
		}
	}
		
	



	system("pause");
	return 0;
}