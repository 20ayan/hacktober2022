//check the number is palindrome or not
#include<stdio.h>
int main(){
    int a,b=0,x,y=10,check;    
             
    printf("\nEnter a number : ");
    scanf("%d",&a);
    check=a; 
    while (check>0)
    {        
        x=f%10;                    
        b=x+(b*y);                                                                      
        f=f/10;                   
    }
    if (b==a)
    {
        printf("%d is a palindrome number ",a);

    }
    else printf("%d is not a palindrome number ",a);
    return 0;
}
