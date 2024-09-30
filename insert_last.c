#include<stdio.h>

void insertLast(int i, int size, int arr[]){
    int ele;
    printf("\nEnter the element to be inserted: ");
    scanf("%d", &ele);
    arr[size] = ele;
    size++;
    printf("Array after inserting: ");
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

    insertLast(i, size, arr);
    return 0;
}