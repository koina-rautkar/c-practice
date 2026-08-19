#include<stdio.h>
int main(){
    int i, n;
    printf("Enter the number of entries: \n");
    scanf("%d",&n);
    int arr[n];

    for ( i = 0; i < n; i++)
    {
        printf("enter your number:");
        scanf("%d", &arr[i]);
    }
    
    //checking for odd and even terms
    printf("Even numbers are:");
    for ( i = 0; i <n ; i++)
    {
        if (arr[i]%2==0)
        {
            printf("%d  ",arr[i]);
        }
        
    }
    printf("\n");

    printf("Odd numbers are:");
    for ( i = 0; i < n; i++)
    {
        if (arr[i]%2 !=0)
        {
            printf("%d  ",arr[i]);
        }
        
    }
    
    return 0;

}