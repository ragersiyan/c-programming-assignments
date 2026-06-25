#include<stdio.h>
int main(){
    int i;
    int j;
    int transpose[3][3];
    int arr[3][3]={{1,2,3},{2,3,4},{4,5,6}};

    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            transpose[j][i]=arr[i][j];

        }
    }
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%d ",transpose[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}