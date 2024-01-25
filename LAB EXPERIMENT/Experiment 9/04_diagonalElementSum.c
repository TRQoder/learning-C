#include <stdio.h>
int main()
{
    int row, col, sum = 0;
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

        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < col; j++)
            {
                if (i == j)
                {
                    sum = sum + arr[i][j];
                }
            }
        }
    printf("The Matrix you Entered : \n");
        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < col; j++)
            {
                printf("%d ", arr[i][j]);
            }
            printf("\n");
            
        }
        
        

        printf("Sum of Diagonals : %d", sum);
    }
    else
    {
        printf("Please Enter Square Matrix.....");
    }

    return 0;
}
