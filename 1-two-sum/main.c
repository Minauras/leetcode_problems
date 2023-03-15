#include <stdio.h>
#include <stdlib.h>
#include "two-sum.h"

int test(int* actual, int actual_size, int* expected, int expected_size);

int main(void) {
    int test_counter = 0;
    int success_counter = 0;
    int return_size;
    int *result;

    return_size = 0;
    result = twoSum((int[]){3,2,4}, 3, 6, &return_size);
    success_counter += test(result, return_size, (int[]){1,2}, 2);
    test_counter++;

    return_size = 0;
    result = twoSum((int[]){2,7,11,15}, 4, 9, &return_size);
    success_counter += test(result, return_size, (int[]){0,1}, 2);
    test_counter++;

    return_size = 0;
    result = twoSum((int[]){3,3}, 2, 6, &return_size);
    success_counter += test(result, return_size, (int[]){0,1}, 2);
    test_counter++;

    printf("Passed %d/%d tests\r\n", success_counter, test_counter);
}

int test(int* actual, int actual_size, int* expected, int expected_size){
    if(!actual){
        printf("FAILED: NULL pointer\r\n");
        return 0;
    }
    if(actual_size != expected_size){
        printf("FAILED: Wrong array size\r\n");
        free(actual);
        return 0;
    }

    for(int i = 0; i < actual_size; i++){
        if(actual[i] != expected[i]){
            printf("FAILED: Wrong answer\r\n");
            free(actual);
            return 0;
        }
    }

    printf("SUCCESS\r\n");
    free(actual);
    return 1;
}