#include<stdio.h>
int arraySum(int i, int size, int arr[]){
    int sum = 0 ;
    for(i=0; i<size; i++){
        sum = sum + arr[i]; 
    }
    return sum;
}

int main(){

    int i;
    int size;
    printf("Enter the size of the array: \n");
    scanf("%d", &size);
    int arr[size];
    printf("Enter the elements of the array: \n");
    for(i=0; i<size; i++){
        scanf("%d", &arr[i]);
    }
    int result = arraySum(i, size, arr);
    printf("The array is: ");
    for(i=0; i<size; i++){
        printf("%d", arr[i]);
    }
    printf("\n");

    printf("The sum of the array elements: %d", result);
    return 0;
}