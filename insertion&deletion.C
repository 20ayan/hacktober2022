#include <stdio.h>
#include <stdlib.h>
int main()
{
    
    int element,i,loc1,loc2,size;
    printf("Enter the size of an array: \n");
    scanf("%d",&size);
    printf("Enter %d array elements: \n",size);
    int a[size];
    for(i=0;i<size;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Array elements:\n ");
    for(i=0;i<size;i++)
    {
        printf("%d ",a[i]);
    }
   
    printf("\nEnter a position to insert an element: \n");
    scanf("%d",&loc1);
     printf("Enter an element to insert at position %d:\n",loc1);
    scanf("%d",&element);
    
    loc1--; 
     for(i=size-1;i>=loc1;i--)
    {
        a[i+1]=a[i];
    }
    a[loc1]=element;
    printf("\nList after Insertion: ");
    for(i=0;i<size+1;i++)
    {
        printf("%d ",a[i]);
    }
    size=size+1;
   printf("\nEnter the position to delete the element:\n");
    scanf("%d",&loc2);

   for(i=loc2-1; i<size-1; i++)
        {
            a[i] = a[i + 1];
        }
size--;
printf("List after deletion:\n");
 for(i=0; i<size; i++)
        {
            printf("%d ", a[i]);
        }
        return 0;
    }
