// quick sort
#include<stdio.h>
int partition(int *arr, int low, int high){
    int pivot = arr[low];
    int i, j, temp;
    i = low +1;
    j = high;

    do{
        while (arr[i] <= pivot)
        {
            i++;
        }
        while (arr[j]> pivot)
        {
            j--;
        }
        if (i<j)
        {
            temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
        
        
    }while(i<j);

    temp = arr[low];
    arr[low] = arr[j];
    arr[j] = temp;
} 
void quicksort(int *arr, int low, int high){
    int partIn;
    while(low<high){
        partIn = partition(arr, low, high);
        quicksort(arr,low, partIn -1);
        quicksort(arr, partIn +1, high);
    }
}
int main(){
    
    return 0;
}

