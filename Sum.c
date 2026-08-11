#include <stdio.h>

int main() { //opening line of main function

    printf("Hello World!\n");

    int a,b; //declaration
    printf("enter the value of a: ");
    scanf("%d",&a); //assignment

    printf("enter the value of b: ");
    scanf("%d",&b);

    printf("a= %d \n",a);
    printf("b= %d \n",b);
    printf("a+b= %d",a+b);
    return 0;  // tells OS: "program finished successfully"
}