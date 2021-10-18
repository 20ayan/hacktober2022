//transpose of a matrix

#include <stdio.h>
 int main()
{
  int m, n, c, d, matrix[10][10], transpose[10][10];
 
  printf("\nEnter the number of rows and columns of a matrix : ");
  scanf("%d%d", &m, &n);
  printf("\nEnter elements of the matrix : ");
 
  for (c = 0; c < m; c++)
    for (d = 0; d < n; d++)
      scanf("%d", &matrix[c][d]);
 
  for (c = 0; c < m; c++)
    for (d = 0; d < n; d++)
      transpose[d][c] = matrix[c][d];
 
  printf("\nTranspose of the matrix: \n");
 
  for (c = 0; c < n; c++) {
    for (d = 0; d < m; d++)
      printf("%d\t", transpose[c][d]);
    printf("\n");
  }

  return 0;
}
