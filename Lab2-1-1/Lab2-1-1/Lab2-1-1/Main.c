#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	char sign = 'X';
	char sign2 = '-';
	int i, j;
	int temp;
	int temp2;

	//===========================================
	printf("(1)\n");
	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if ((i == 0) || (i == 9) || (j == 0) || (j == 9))
			{
				printf("%c", sign);
			}
			else
			{
				printf("%c", sign2);
			}
		}
		printf("\n");
	}


	//===============================================
	printf("(2)\n");
	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if ((i == 0) || (i == 1) || (i == 2) || (i == 7) || (i == 8) || (i == 9)
				|| (j == 0) || (j == 1) || (j == 2) || (j == 7) || (j == 8) || (j == 9))
			{
				printf("%c", sign);
			}
			else
			{
				printf("%c", sign2);
			}
		}
		printf("\n");

	}
//========================================================
	printf("(3)\n");
	temp = 4;
	temp2 = 5;
	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if ((i < 5) && (j == temp))
			{
				printf("%c", sign);
				temp--;
			}
			else if ((i < 5) && (j == temp2))
			{
				printf("%c", sign);
				
			}
			else if (i==4)
			{
				printf("%c", sign);
			}
			else
			{
				printf("%c", sign2);
			}
		}
		temp2++;
		printf("\n");

	}
	//==================================================
	temp = 0;
	temp2 = 9;
	printf("(4)\n");
	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if ((i < 5) && (j == temp))
			{
				printf("%c", sign);
				
			}
			else if ((i < 5) && (j == temp2))
			{
				printf("%c", sign);

			}
			else if (i == 0)
			{
				printf("%c", sign);
			}
			else
			{
				printf("%c", sign2);
			}
		}
		temp2--;
		temp++;
		printf("\n");

	}
	//========================================================
	temp = 0;
	temp2 = 9;
	printf("(5)\n");
	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (j == temp)
			{
				printf("%c", sign);

			}
			else if (j == temp2)
			{
				printf("%c", sign);
			}
			else
			{
				printf("%c", sign2);
			}
		
		}
		temp2--;
		temp++;
		printf("\n");
	}
}