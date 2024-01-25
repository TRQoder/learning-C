#include <stdio.h>
int main()
{
    int n, target;
    printf("Enter the size of array :");
    scanf("%d", &n);

    int arr[n];

    printf("Enter the Elements :\n");

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter the target element :");
    scanf("%d", &target);

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == target)
        {
            printf("Index of element : %d", i);
            break;
        }
    }

    return 0;
}
