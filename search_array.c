#include<stdio.h>
int main(){
    int n,i;
    printf("Enter number of entries:");
    scanf("%d",&n);
    int arr[n];
    for ( i = 0; i < n; i++)
    {
        printf("enter your number:");
        scanf("%d",&arr[i]);
    }
    
    //searching for a number

    int a;
    int found = 0;
    printf("Enter what you want to search:");
    scanf("%d",&a);
    for ( i = 0; i < n; i++)
    {
        if (arr[i]==a)
        {
            found=1;
            printf("Found %d at %d index",a,i);
            break;
        }
    }
    if (found==0)
        {
            printf("%d not found in the array.\n",a);
        }

    return 0;

}