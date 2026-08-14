#include <stdio.h>
int main() {
    int a,b;
    int i,j;
    printf("write the numbers between which you want your multiplication table\n ex:1 5 will give table between 1 to 5\n");
    printf("enter first number:");
    scanf("%d",&a);
    printf("enter second number:");
    scanf("%d",&b);

    for(i=a; i<=b;i++) {
        printf("table of : %d \n",i);
        for(j=1;j<=10;j++) {
        printf("%d x %d = %d\n\n",i,j,(i*j));
        }
    }
    return 0;

}