#include <stdio.h>
#include <stdlib.h>
int Han_Xin_5()
{
	char sign = 'X';
	char sign2 = '-';
	int i, j;
	int temp;
	int temp2;
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
	return 0;
}