#include<stdio.h>

void selectSort(int size, int arr[]){
    int temp=0;
    for(int i=0; i<size-1; i++){
        int min = i;
        for(int j=i+1; j<size; j++){
            if(arr[j]<arr[min]){
                min = j;
            }
        }
        if(min!=i){
           temp = arr[i];
           arr[i] = arr[min];
           arr[min] = temp;
        }
    }
    printf("\nThe array after sorting: ");
    for(int i= 0; i< size; i++){
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

    selectSort(size, arr);
    return 0;
}