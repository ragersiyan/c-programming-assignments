#include<stdio.h>
int main(){
    float a,b;
    char operator;
    printf("enter the first number : ");
    scanf("%f",&a);
    printf("enter the operator : ");
    scanf(" %c",&operator);
    printf("enter the second number : ");
    scanf("%f",&b);

    if(operator == '+'){
        printf("%.2f is the result",a+b);
    }

    else if(operator == '-'){
        printf("%.2f is the result",a-b);
    }

    else if (operator == '*'){
        printf("%.2f is the result",a*b);
    }

    else if (operator == '/'){
        if(b!=0){
            printf("%.2f is the result",a/b);}
            else{
                printf("error! division by zero ");}
        
        }
        
    else{
        printf("invalid operator");

    }

    return 0;

}