#include<stdio.h>

void deleteLast(int i, int size, int arr[]){
    size--;
    printf("\nThe array after deleting from last: ");
    for(i=0; i<size; i++){
        printf("%d ", arr[i]);
    }
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
    printf("The array: ");
    for(i=0; i<size; i++){
        printf("%d ",arr[i]);
    }

    deleteLast(i, size, arr);
    return 0;
}