#include <stdio.h>
int sum(int arr[])
{
    int result = 0;
    for (int i = 0; i <= 3; i++)
    {
        result += arr[i];
    }

    return result;
}
int main()
{
    int arr[] = {5, 4, 2, 3};

    printf("%d\n", sum(arr));

    return 0;
}
