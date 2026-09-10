#include<stdio.h>

int search(int arr[], int n,int a){
    int i;
    for ( i = 0; i < n; i++)
    {
        if (arr[i]==a)
        {
            return i;// exit immediately, handing back the index
        }
        
    }
    return -1;   // never found — reached the end of the loop
}

int countOcurrences(int arr[], int n , int a){
    int c = 0;
    for ( int i = 0; i < n; i++)
    {
        if (arr[i]==a)
        {
            c++;
        }
        
    }
    return c;
}

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
    printf("Enter what you want to search:");
    scanf("%d",&a);
    int r = search(arr,n,a);
    if (r==-1)
    {
        printf("%d not found in array\n",a);
    }
    else{
        printf("Found %d at index: %d\n",a,r);
    }

    //number of times that entry appeared
    printf("Number of times %d appeared:%d",a,countOcurrences(arr,n,a));

    return 0;

}