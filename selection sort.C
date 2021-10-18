//selection sort
#include <stdio.h>
int main() {
    int n;
    printf("enter size of array:\n");
scanf("%d",&n);
int arr[n];
printf("enter array elements:\n");
   int i, j, position, swap;
   for(i=0;i<n;i++)
  {scanf("%d",&arr[i]);}
   
   for (i = 0; i < (n - 1); i++) {
      position = i;
      for (j = i + 1; j < n; j++) {
         if (arr[position] > arr[j])
            position = j;
      }
      if (position != i) {
         swap = arr[i];
         arr[i] = arr[position];
         arr[position] = swap;
      }
   }
   printf("Array sorted in ascending order\n");
   for (i = 0; i < n; i++)
      printf("%d ", arr[i]);
   return 0;
}
