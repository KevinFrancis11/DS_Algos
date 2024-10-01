#include<stdio.h>


void insertSort(int size, int arr[]){
    printf("\nThe array after sorting: ");
    for(int i=1; i<size; i++){
        int j = i-1;
        int x = arr[i];
        while(arr[j]>x && j>-1){
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = x;
    }
    for(int i=0; i<size; i++){
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

    insertSort(size, arr);
    return 0;
}