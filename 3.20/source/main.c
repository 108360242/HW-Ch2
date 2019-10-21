#include<stdlib.h>
#include<stdio.h>

int main(void)
{
	int hours_of_work, i;
	float rate_of_worker;
	for ( i = 0; i > -1; i++)
	{
		printf("Enter # of hours worked (-1 to end):  ");
		scanf_s("%d", &hours_of_work);
		if (hours_of_work == -1)
		{
			break;
		}
		printf("Enter hourly rate of the worker ($00.00):  ");
		scanf_s("%f", &rate_of_worker);
		printf("Salary is $%.2f\n\n", hours_of_work * rate_of_worker);
	}
	system("pause");
	return 0;
}