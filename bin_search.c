#include<stdio.h>

int binSearch(int arr[], int data, int size){
    int l = 0;
    int r = size-1;
    int mid;
    
    while(l<=r){
        mid = (l+r)/2;
        if(data == arr[mid]){
            return mid;
        }
        else if(data < arr[mid]){
            r = mid-1;
        }
        else{
            l = mid+1;
        }
    }
        return -1;
}

int main(){
    int i;
    int size;
    int data;
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
    printf("\nEnter the element to be searched: ");
    scanf("%d",&data);
    int result = binSearch(arr, data, size);
    printf("\nThe result: %d\n", result);
    if(result==-1){
        printf("\n%d not found.",data);
    }
    else{
        printf("\n%d is found at position %d",data, result+1);
    }
    return 0;
}