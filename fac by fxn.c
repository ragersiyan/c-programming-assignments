#include<stdio.h>

int fac(int n);
int fac(int n){
    if(n==0){
    return 1;}
    if (n==1){
        return 1;
    }
    return n*fac(n-1);
}

int main(){
    int n=5;
    printf("%d",fac(n));
    return 0;
}


    