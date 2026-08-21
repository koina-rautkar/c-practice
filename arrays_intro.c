#include <stdio.h>

// making a function to pull largest number from an array

    int FindLargest( int arr[],int n){
         int l= arr[0];
        for ( int i = 0; i < n; i++)
        {
            if (arr[i]>l)
            {
                l= arr[i];
            }
            
        }
        return l;
    }
// making a function to pull smallest number from an array
    int FindSmallest(int arr[], int n){
        int s= arr[0];
        for (int i = 0; i < n; i++)
        {
            if (arr[i]<s)
            {
                s= arr[i];
            }
            
        }
        return s;
    }
// making a function to find sum of an array
    int sum(int arr[],int n){
        int a=0;
        for (int i = 0; i < n; i++)
        {
            a= a + arr[i];
        }
        return a;
    }
// making a function to find average of an array
    float avg(int arr[],int n){
        float b;
        b= (float)sum(arr,n)/n;
        return b;
    }
// making a function to reverse an array
    void reverse(int arr[], int n){
        for (int i=n-1; i >= 0; i--)
        {
            printf("%d", arr[i]);
            if (i != 0)
            {
                printf(",");
            }
            
        }
    }



int main(){
    int i,n;
    printf("enter the number of enteries: \n");
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++){
        printf("enter your number: ");
        scanf("%d", &arr[i]);
    }
    //printing the array
    for(i=0;i<n;i++){
        printf("%d",arr[i]);
        if(i<(n-1)){
                printf(",");
            }
    }
    printf("\n");

    //finding the largest number
    int l;
    l= FindLargest(arr,n);
    printf("The largest number is: %d\n",l);

    //finding the smallest number
    int s;
    s = FindSmallest(arr,n);
    printf("smallest number is: %d\n",s);

    //Sum and Average of an array
    int a;
    float av;
    a = sum(arr,n);
    printf("Sum is: %d \n",a);

    av= avg(arr,n);
    printf("Average is: %.2f \n",av);

    //reversing the array.
    printf("reversed array is: \n");
    reverse(arr,n);
    
    return 0;
}
