#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int length, breadth, i, j, g;
	for ( i = 0; i >-1; i++)
	{
		printf("Enter the length(-1 to end):  ");
		scanf_s("%d", &length);
		if (length == -1)
		{
			break;
		}
		printf("Enter the breadth:  ");
		scanf_s("%d", &breadth);
		for ( j = 0; j < length; j++)
		{
			for ( g = 0; g < breadth; g++)
			{
				if (j == 0 || j == length - 1)
				{
					printf("+");
				}
				else if (g == 0 || g == breadth -1)
				{
					printf("+");
				}
				
				else
				{
					printf(" ");
				}
				if (g == breadth - 1)
				{
					printf("\n");
				}
			}
		}
	}
	system("pause");
	return 0;
}