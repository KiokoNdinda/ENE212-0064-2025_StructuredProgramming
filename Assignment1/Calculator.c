#include <stdio.h>
#include <stdlib.h>

int main()
{
    //declaration of the variables
    double num1;
    double num2;
    char symbol;
    //description to the user and input from user
    printf("This is a calculator program that performs basic arithmetics.Provide the expression you want calculated below");
    scanf("%lf %c %lf",&num1,&symbol,&num2);
    //checks which symboli.e operator has been provided and performs the necessary calculations then prints the result
    switch(symbol){
        case '+':
            printf("%lf", num1+num2);
            break;
        case '-':
            printf("%lf", num1-num2);
            break;
        case '*':
            printf("%lf", num1*num2);
            break;
        case '/':
            printf("%lf", num1/num2);
            break;
        default:
            printf("Unrecognisable symbol!");
            break;
        }

    return 0;
}
