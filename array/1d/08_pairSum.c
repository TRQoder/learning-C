#include <stdio.h>

int main()
{
    int arr[8] = {1, 2, 3, 4, 5, 6, 7, 8};
    int count = 0;
    int num;
    printf("Enter any number :\n");
    scanf("%d", &num);
    for (int i = 0; i < 8; i++)
    {
        for (int j = i + 1; j < 8; j++)
        {
            int pairSum = arr[i] + arr[j];

            if (pairSum == num)
            {
                count++;
            }
        }
    }
    printf("No of Pairs : %d\n", count);

    return 0;
}
