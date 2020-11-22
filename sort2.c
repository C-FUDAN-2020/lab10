#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#define ARRAY_LEN 10

// several function declarations
void mergeSort(int arr[], int len);
void generateRandomArray(int arr[], int len);
void printArray(int arr[], int len);
void mergeSortRecursive(int arr[], int start, int end);

int main(){
    int nums[ARRAY_LEN];
    double cv;
    generateRandomArray(nums, ARRAY_LEN);
    printf("Before merge sort, the array is:\n");
    printArray(nums, ARRAY_LEN);

    // TODO: call the function mergeSort 

    printf("\nAfter merge sort, the array is:\n");
    printArray(nums, ARRAY_LEN);
    return 0;
}

/**
 * generate a random integer array
 */
void generateRandomArray(int arr[], int len){
    srand(time(0));
    for(int i = 0; i < len; i++){
        arr[i] = rand() % 100;
    }
}

/**
 * output the array
 */
void printArray(int arr[], int len){
    for(int i = 0; i < len; i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
}

/**
 * merge sort 
 */
void mergeSort(int arr[], int len){   
    mergeSortRecursive(arr, 0, len - 1);
}

/**
 * the recursive part of mergeSort
 */
void mergeSortRecursive(int arr[], int start, int end) {
    // TODO: complete the function definition with recursive formulation
}