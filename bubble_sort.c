#include<stdio.h>

void bubbleSort(int size, int arr[]){
    int temp=0;
    int flag = 0;
    printf("\nThe array after sorting: \n");
    for(int i=0; i<size-1; i++){
        flag = 0;
        for(int j=0; j<size-1-i; j++){
            if(arr[j] > arr[j+1]){
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                flag = 1;
            }
        }
          if(flag == 0){
              break;
         }
    }
    //6 5 0 12 43
    for(int i = 0; i < size ; i++){
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

    bubbleSort(size, arr);
    return 0;
}