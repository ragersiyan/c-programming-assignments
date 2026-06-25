#include <stdio.h>
int main(){
    int arr[100];
    int n;
    int i;
    int key;


    printf("Enter size of an array");
    scanf("%d",&n);
    printf("Enter the array elements",n);
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    printf("The element to be searched");
    scanf("%d",&key);

    for(i=0;i<n;i++){
        if(arr[i]==key){
            printf("element is found at %d",i);
            break;
        }
    }

return 0;

}