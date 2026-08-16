#include <stdio.h>
int main(){
    int n;
    int i,j;
    printf("enter your number: \n");
    scanf("%d",&n);

    for(i=0;i<=n;i++){
        for(j=1;j<=i;j++){
            printf("%d",j);
        }
        printf("\n");
    }
    return 0 ;

}