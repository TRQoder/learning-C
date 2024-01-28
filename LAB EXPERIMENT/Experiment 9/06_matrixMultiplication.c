#include <stdio.h>
int main()
{
    int row1, col1;
    printf("Enter the row of the first matrix  :");
    scanf("%d", &row1);
    printf("Enter the Column of the first matrix :");
    scanf("%d", &col1);
    int row2, col2;
    printf("Enter the row of the second matrix  :");
    scanf("%d", &row2);
    printf("Enter the Column of the second matrix :");
    scanf("%d", &col2);

    if (col1 == row2)
    {
        int matrix1[row1][col1];
        int matrix2[row2][col2];
        int rmatrix[row1][col2];

        printf("Enter the Elements of first Matrix :\n");

        for (int i = 0; i < row1; i++)
        {
            for (int j = 0; j < col1; j++)
            {
                scanf("%d", &matrix1[i][j]);
            }
        }

        printf("Enter the Elements of second Matrix :\n");

        for (int i = 0; i < row2; i++)
        {
            for (int j = 0; j < col2; j++)
            {
                scanf("%d", &matrix2[i][j]);
            }
        }

        for (int i = 0; i < row1; i++)
        {
            for (int j = 0; j < col2; j++)
            {
                int sum = 0;
                for (int k = 0; k < col1; k++)
                {
                    sum += matrix1[i][k] * matrix2[k][j];

                }
                rmatrix[i][j] = sum;
            }
        }

        printf("\n\nThe Resultant Matrix : \n");

        for (int i = 0; i < row1; i++)
        {
            for (int j = 0; j < col2; j++)
            {
                printf("%d ", rmatrix[i][j]);
            }
            printf("\n");
        }
    }

    else
    {
        printf("This matrix is not valid for Mulpliplication.....");
    }

    return 0;
}
