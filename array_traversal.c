#include<stdio.h>

//to print the array using recurssion
int recc_traversal(int arr[], int size, int index){
    if(index <= size-1){
        printf("%d \t", arr[index]);
    }
    return recc_traversal(arr, size, index+1);
}

//to print the array using for loop
void traversal(int i, int size, int arr[]){
    printf("The array pintf using for loop: \n");
    for(i=0; i<size; i++){
        printf("%d", arr[i]);
    }
}


int main(){
    int i;
    int size;
    printf("Enter the size of the array: \n");
    scanf("%d", &size);
    int arr[size];
    int arr_size = sizeof(arr)/sizeof(arr[0]);
    printf("The size of the array found using the sizeof: %d", arr_size);
    printf("Enter the elements of the array: \n");
    for(i=0; i<size; i++){
        scanf("%d", &arr[i]);
    }
    printf("Array print using recurssion: \n");
    printf("\n");
      //traversal(i, size, arr);
      recc_traversal(arr, size, 0);
}