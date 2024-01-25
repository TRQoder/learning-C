#include <stdio.h>
int main()
{
    int n, min;
    printf("Enter the size of array :");
    scanf("%d", &n);

    int arr[n];

    printf("Enter the Elements :\n");

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    min = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (min > arr[i])
        {
            min = arr[i];
        }
    }
    printf("Min element of the array : %d\n", min);

    return 0;
}
