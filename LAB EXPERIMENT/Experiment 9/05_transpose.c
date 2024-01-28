//check
#include <stdio.h>
int main()
{
    int row, col;
    printf("Enter the row of the matrix :");
    scanf("%d", &row);
    printf("Enter the Column of the matrix :");
    scanf("%d", &col);

    if (row == col)
    {
        int arr[row][col];

        printf("Enter the Elements :\n");

        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < col; j++)
            {
                scanf("%d", &arr[i][j]);
            }
        }

        printf("\n\nThe Matrix you Entered : \n");

        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < col; j++)
            {
                printf("%d ", arr[i][j]);
            }
            printf("\n");
        }

        printf("\n\nThe Transpose of the Matrix : \n");

        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < col; j++)
            {
                printf("%d ", arr[j][i]);
            }
            printf("\n");
        }
    }
    else
    {
        printf("Please Enter Square Matrix....");
    }

    return 0;
}
