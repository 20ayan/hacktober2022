//addition of two matrices

#include <stdio.h>
 int main()
{
   int m, n, i, d, first[m][n], second[m][n], sum[m][n];
    printf("\nEnter the number of rows and columns of matrix : ");
   scanf("%d%d", &m, &n);
   printf("\nEnter the elements of first matrix : ");
    for (i = 0; i < m; i++)
      for (d = 0; d < n; d++)
         scanf("%d", &first[i][d]);
    printf("\nEnter the elements of second matrix : ");
    for (i = 0; i < m; i++)
      for (d = 0 ; d < n; d++)
         scanf("%d", &second[i][d]);
      printf("\nSum of entered matrices:- \n");
      for (i = 0; i < m; i++)
   {
      for (d = 0 ; d < n; d++)
	  {
         sum[i][d] = first[i][d] + second[i][d];
         printf("%d\t", sum[i][d]);
      }
      printf("\n");
   }
    return 0;
}
