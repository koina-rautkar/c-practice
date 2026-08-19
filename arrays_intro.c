#include <stdio.h>
int main(){
    int i,n;
    int l;
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
    l = arr[0];
    for(i=0;i<n;i++) {
        if(arr[i]>l){
            l = arr[i];
        }
    }
    printf("The largest number is: %d\n",l);

    //finding the smallest number
    int s;
    s= arr[0];
    for ( i = 0; i < n; i++)
    {
        if ( arr[i]<s)
        {
            s= arr[i];
        }
        
    }
    printf("smallest number is: %d\n",s);

    //Sum and Average of an array
    int sum=0;
    float avg;
    for ( i = 0; i <n; i++)
    {
        sum= sum+ arr[i];
    }
    printf("Sum is: %d \n",sum);

    avg= (float)sum/n ;
    printf("Average is: %.2f \n",avg);

    //reversing the array.
    int r;
    printf("reversed array is: \n");
    for ( i = n-1; i>=0; i--)
    {
        r=arr[i];
        printf("%d",r);
        if (i !=0)
        {
            printf(",");
        }   
    }

    return 0;
}
