#include<stdio.h>
#include<stdlib.h>



void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
    return;
}

int partition(int arr[], int low, int high){
    int pivot = arr[high];
    int i = low-1;
    for(int j = low; j <high; j++){
        if(arr[j]<pivot){
            i++;
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i+1], &arr[high]);
    return i+1;
}

void quickSort(int arr[], int low, int high){

    if(low < high){
        int pivot = partition(arr, low, high);
        
        quickSort(arr,low, pivot-1);
        quickSort(arr, pivot+1, high);
    }
}

void print(int arr[] , int n){

    for(int i = 0 ; i < n; i ++)
        printf("%d ",arr[i]);
    
    printf("\n");
}

void insertionSort(int arr[], int n){
    int key, j;
    for(int i = 1; i < n-1; i++){
        key = arr[i];
        j = i-1;

        while(j >= 0 && arr[j] > key){
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = key;
    }
}

void selection(int arr[], int n){
    int min;
    for(int i = 0; i < n; i++){
        min = i;
        for(int j = i+1; j < n; j++){
            if(arr[j] < arr[min]){
                min = j;
            }
        }
        swap(&arr[i], &arr[min]);
    }
}


int merge(int arr[], int low, int high){
    int *temp = malloc(sizeof(int) * high-low+1);
    int mid = (low + high)/2;
    int i = low;
    int j =  mid + 1;
    int k = low;
    while(i <= mid && j <= high){
        if(arr[i] < arr[j]){
            temp[k++] = arr[i++];
        }else{
            temp[k++] = arr[j++];
        }
    }

    while(i <= mid)
        temp[k++] = arr[i++];
    while(j <= high)
        temp[k++] = arr[j++];

    for(int i = low; i <= high; i++){
        arr[i] = temp[i];
    }
    printf("\n");
}


int mergesort(int arr[], int low, int high){

    if(low < high){
        int mid = (low + high)/2;
        mergesort(arr,low,mid);
        mergesort(arr,mid +1, high);
        merge(arr, low, high);
    }
}

void bubble(int arr[], int n){
    for(int i = 0; i < n - 1; i++){
        for(int j = 0; j < n - i - 1; j++){
            if(arr[j] > arr[j+1])
                swap(&arr[j], &arr[j+1]);
        }
    }
}

int main(){
    // int arr[] = {112,34,3,21,2,3,5,12,3,5,2,4,12,25,5,5,4,22,4,45,36};
    int arr[] = {5,4,3,2,1};
    int size = sizeof(arr)/sizeof(int);
    print(arr,size);
    // quickSort(arr,0,size-1);
    mergesort(arr,0,size-1);
    print(arr,size);
}