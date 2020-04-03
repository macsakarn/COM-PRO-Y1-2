#include <stdio.h>

int main()
{
	double matrix1[3][3];
	int row1, col1;
	int count = 0;
	for (row1 = 0; row1 < 3; ++row1)
	{
		for (col1 = 0; col1 < 3; ++col1)
		{
			scanf(" %lf",&matrix1[row1][col1]);
			if(matrix1[row1][col1] == 0.0)
			{
				count++;
			}
		}
	}
	if ((count == 6) && (matrix1[0][0] == matrix1[1][1]) && (matrix1[1][1] == matrix1[2][2]))
	{
		printf("This is a scalar matrix\n");
	}
	else
	{
		printf("This is not a scalar matrix\n");
	}
	return 0;
}