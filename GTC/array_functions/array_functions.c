#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#include "array_functions.h"

int number_of_smaller_elements(const int *arr, int size, int elem){
    int total = 0;
    for (int index = 0 ; index < size ; index++){
        if (arr[index] < elem){
            total++;
        }
    }

    return total;
}

void remove_element(int *arr, int size, int elem) {
    int index;

    // Find element to remove
    for (index = 0; index < size; index++) {
        if (arr[index] == elem) {
            break;
        }
    }

    // Shift elements to the left to fill the gap.
    for (int i = index; i < size - 1; i++) {
        arr[i] = arr[i + 1];
    }
    arr[size - 1] = 0;
}

int contains(const int *arr, int size, int elem){
    for (int index = 0 ; index < size ; index++){
        if (arr[index] == elem) return 1;
    }

    return 0;
}

void add(int *arr, int size, int elem){
    arr[size] = elem;
}