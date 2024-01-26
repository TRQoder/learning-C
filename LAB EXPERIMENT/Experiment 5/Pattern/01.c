#include <stdio.h>
int main()
{
  int n;
  printf("Enter n : ");
  scanf("%d", &n);

  // Method 1;

  for (int i = 1; i <= n; i++)
  {
    for (int j = 1; j <= n; j++)
    {
      if (j <= i)
      {
        printf("* ");
      }
    }
    printf("\n");
  }

  // Method 2;

  // for(int i=1;i<=n;i++){
  //     for(int j=1;j<=i;j++){
  //         printf("* ");

  //     }
  //     printf("\n");

  // }

  return 0;
}
