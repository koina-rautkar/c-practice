#include<stdio.h>
int main(){
    float a,b,r;
    char o;
    printf("enter value of a:");
    scanf("%f",&a);
    printf("enter value of b:");
    scanf("%f",&b);
    printf("enter operator(+,-,*,/) : ");
    scanf(" %c",&o);
    switch (o)
    {
    case '+':
        r=a+b;
        printf("%.2f + %.2f = %.2f",a,b,r);
        break;

    case '-':
        r=a-b;
        printf("%.2f - %.2f = %.2f",a,b,r);
        break;

    case '*':
        r=a*b;
        printf("%.2f * %.2f = %.2f",a,b,r);
        break;
    
     case '/':
        r=a/b;
        printf("%.2f / %.2f = %.2f",a,b,r);
        break;

    default:
    printf("Wrong operator entered");
        break;
    }

    return 0;
    
}