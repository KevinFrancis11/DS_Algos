#include<stdio.h>
int binSearch(int size,int key, int arr[], int index){
    if(index>=size){
        return -1;
    }
    if(arr[index]==key){
        return index;
    }

    return binSearch(size, key, arr, index+1);
}


int main(){
    int i;
    int key;
    int arr[] = {1,23,5,77,36,49};
    int size = sizeof(arr)/sizeof(arr[0]);
    printf("Enter the element to search: \n");
    scanf("%d",&key);
    int result = binSearch(size, key, arr, 0);
    if(result!=-1){
        printf("%d found at position %d", key, result+1);
    }   
    else
    {
        printf("%d not found", key);
    }
    return 0;
}