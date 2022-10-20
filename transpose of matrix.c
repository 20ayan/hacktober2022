//transpose of a matrix

#include <stdio.h>
 int main()
{
  int a, b, c, d, matrix[10][10], transpose[10][10];
 
  printf("\nEnter the number of rows and columns of a matrix : ");
  scanf("%d%d", &a, &b);
  printf("\nEnter elements of the matrix : ");
 
  for (c = 0; c < a; c++)
    for (d = 0; d < b; d++)
      scanf("%d", &matrix[c][d]);
 
  for (c = 0; c < a; c++)
    for (d = 0; d < b; d++)
      transpose[d][c] = matrix[c][d];
 
  printf("\nTranspose of the matrix: \n");
 
  for (c = 0; c < b; c++) {
    for (d = 0; d < a; d++)
      printf("%d\t", transpose[c][d]);
    printf("\n");
  }

  return 0;
}
