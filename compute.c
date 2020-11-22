#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define ARRAY_LEN 10

// several function declarations
double computeCoefficientOfVariation(int nums[], int len);
void generateRandomArray(int nums[], int len);

int main(){
    int nums[ARRAY_LEN];
    double cv;
    generateRandomArray(nums, ARRAY_LEN);
    // TODO: call the function computeCoefficientOfVariation 
    // and output the cv value;
    return 0;
}

/*
 * generate random integer array
 */
void generateRandomArray(int nums[], int len){
    srand(time(0));
    for(int i = 0; i < len; i ++){
        nums[i] = rand() % 100;
    }
}

/*
 * compute coefficient of variation
 */
// double computeCoefficientOfVariation(int num[], int len){
//     // TODO: complete the function definition
        
// }