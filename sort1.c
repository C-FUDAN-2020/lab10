#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#define ARRAY_LEN 10

// several function declarations
void selectionSort(int nums[], int len);
void generateRandomArray(int nums[], int len);
void printArray(int nums[], int len);

int main(){
    int nums[ARRAY_LEN];
    double cv;
    generateRandomArray(nums, ARRAY_LEN);
    printf("Before selection sort, the array is:\n");
    printArray(nums, ARRAY_LEN);

    // TODO: call the function selectionSort 

    printf("\nAfter selection sort, the array is:\n");
    printArray(nums, ARRAY_LEN);
    return 0;
}

/**
 * generate a random integer array
 */
void generateRandomArray(int nums[], int len){
    srand(time(0));
    for(int i = 0; i < len; i++){
        nums[i] = rand() % 100;
    }
}

/**
 * output the array
 */
void printArray(int nums[], int len){
    for(int i = 0; i < len; i++){
        printf("%d ",nums[i]);
    }
    printf("\n");
}

/**
 * selection sort 
 */
void selectionSort(int num[], int len){
    // TODO: complete the function definition
        
}