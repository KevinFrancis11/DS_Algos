#include<stdio.h>

int insertAny(int i, int size, int arr[]){
    int num;
    int pos;
    printf("Enter the element to be inserted: ");
    scanf("%d",&num);
    printf("Enter the position to be inserted: ");
    scanf("%d", &pos);
    for(i=size-1; i>=pos-1; i--){
        arr[i+1] = arr[i];
    }
    arr[pos-1] = num;
    size++;
    printf("The array after inserting element is: \n");
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
    printf("\n");
    insertAny(i, size, arr);
   
    return 0;

}