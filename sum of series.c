#include<stdio.h>
int main(){
    int n,i;
    float sum;
    float j;
    sum =0.0;
    printf("Enter the number :");
    scanf("%f",&n);

    for(i=2;i<=n;i++){
        j=1.0/i;
        sum = sum +j;}
        printf("The sum is %.3f",sum);
    
    return 0;

}