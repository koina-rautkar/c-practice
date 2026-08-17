#include <stdio.h>
int main(){
    int i,n;
    printf("enter the no of numbers you want: \n");
    scanf("%d",&n);
    int arr[n];
    for ( i = 0; i <=(n-1   ); i++)
    {
        printf("enter your number:\n");
        scanf("%d",&arr[i]);
    }
    printf("your array is:\n");
    for ( i = 0; i <n; i++)
    {
        printf("%d",arr[i]);
        if (i<(n-1)){
            printf(",");
        }
        
        
    }
    
    
    return 0;
    
}