#include<stdio.h>
void insertFirst(int i, int size, int arr[]){
    int ele;
    printf("\nEnter the element to be inserted: ");
    scanf(" %d", &ele);
    for(i=size-1; i>=0; i--){
        arr[i+1] = arr[i];
    }
    arr[0] = ele;
    size++;
    printf("The array after inserting element to first position: ");
    for(i=0; i<size; i++){
        printf(" %d ",arr[i]);
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

    insertFirst(i, size, arr);
    return 0;
}