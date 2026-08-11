#include <stdio.h>
int main() {
    float a,b ; //a and b hold decimal numbers for accurate division
    char o ; //o stores operators like +,-,*,/

    printf("Enter the value of a: \n");
    scanf("%f",&a); //%f reads decimal value onto a 

    printf("Enter the value of b:\n");
    scanf("%f",&b); //%f reads decimal value onto b

    printf("enter operation: (+,-,*,/) \n");
    scanf(" %c",&o);  //the leading space before %c skips the newline from previous scanf

    if (o=='+') {
        printf("Result is : %.2f\n",a+b);
    } else if (o == '-'){
        printf("Result is: %.2f\n", a-b);
    } else if (o== '*'){
        printf("Result is: %.2f \n", a*b);
    } else if (o== '/'){
        printf("Result is: %.2f \n", a/b);
    } else {
        printf("Invalid operation\n"); //runs if user types anything other than +,-,*,/ 
    }
    
    return 0 ; //tells the OS the programe is finished without any errors
    
}