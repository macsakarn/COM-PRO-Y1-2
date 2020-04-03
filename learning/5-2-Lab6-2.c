#include <stdio.h>

int main()
{
	double matrix1[3][3],  matrix2[3][3], result[3][3];
	int row1, col1;
	int row2, col2;
	int i, j, k;
	for (row1 = 0; row1 < 3; ++row1)
	{
		for (col1 = 0; col1 < 3; ++col1)
		{
			scanf("%lf",&matrix1[row1][col1]);		
		}
	}
	for (row2 = 0; row2 < 3; ++row2)
	{
		for (col2 = 0; col2 < 3; ++col2)
		{
			scanf("%lf",&matrix2[row2][col2]);		
		}
	}
 	for (i = 0; i < 3; ++i)
    {
        for (j = 0; j < 3; ++j)
        {
            for (k = 0; k < 3; ++k)
            {
                result[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }
    printf("A x B\n");
    for (i = 0; i < 3; ++i)
    {
        for (j = 0; j < 3; ++j)
        {
            printf("%.2lf ", result[i][j]);
        }
        printf("\n");
    }
}