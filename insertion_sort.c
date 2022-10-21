#include <stdio.h>

int printing(int arr[],int n)
{
  for(int i=0;i<n;i++)
  {
   printf("%d ",arr[i]);
  }
  printf("\n");
  return 1;
}

int insert_sort(int arr[], int n)
{
    int i,p,j,co=0;
    for(i=1; i<n; i++)
    { 
      p=arr[i];
      //printf("p is %d\n",p);
      j=i-1;
      while(j>=0 && arr[j]>p)
      {
       // printf("\nj is %d\n",j);
        arr[j+1]=arr[j];
        j--; //co++; 
       // printf("\t");   
       // printing(arr,n);
      }
     // printing(arr,n);
     // printf("\nj+1 is %d\n",j+1);
      arr[j+1]=p;
     // printf("\n");
     // printing(arr,n);
     // printf("\n\n");
    }
    //printf("%d",co);
    printing(arr,n);
   return 1; 
}
int main()
{
  int i,n;
  scanf("%d",&n);
  int arr[n];
  for(i=0;i<n;i++)
  {
    scanf("%d",&arr[i]);
  }  
      printf("insertion Sort: ");
      insert_sort(arr,n);
  }
