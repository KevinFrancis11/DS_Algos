#include<stdio.h>
void deleteAny(int i, int size, int arr[]){
    int pos;
    printf("\nEnter the position of the element to be deleted: ");
    scanf("%d", &pos);
    for(i=pos-1; i<=size-1; i++){
        arr[i] = arr[i+1];
    }
    size--;
    printf("\nThe array after deletion: ");
    for(i=0; i<size; i++){
        printf("%d ",arr[i]);

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

    deleteAny(i, size, arr);
    return 0;
}