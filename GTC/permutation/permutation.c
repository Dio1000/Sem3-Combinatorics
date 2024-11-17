#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#include "permutation.h"
#include "../utility_functions/utility_functions.h"
#include "../array_functions/array_functions.h"

void next_permutation(int *perm, int n) {
    if (perm == NULL) return;
    if (n <= 0) return;

    int x = -1, y = -1, index;

    // Step 1: Find max(x) such that perm[x] < perm[x+1]
    for (index = n - 1; index > 0; index--) {
        if (perm[index - 1] < perm[index]) {
            x = index - 1;
            break;
        }
    }

    // If no such x is found, the array is the last permutation
    if (x == -1) {
        printf("There is no next permutation.\n");
        return;
    }

    // Step 2: Find max(y) such that perm[x] < perm[y]
    for (index = n - 1; index > x; index--) {
        if (perm[index] > perm[x]) {
            y = index;
            break;
        }
    }

    // Step 3: Swap perm[x] and perm[y]
    int temp = perm[x];
    perm[x] = perm[y];
    perm[y] = temp;

    // Step 4: Reverse perm[x+1...n-1]
    int left = x + 1;
    int right = n - 1;

    while (left < right) {
        temp = perm[left];
        perm[left] = perm[right];
        perm[right] = temp;

        left++;
        right--;
    }

    printf("Next permutation: ");
    for (index = 0; index < n; index++) {
        printf("%d ", perm[index]);
    }
    printf("\n");
}

int permutation_rank(const int *perm, int n){
    int *elems = (int*)malloc(sizeof(int));
    int elems_size = n;

    for (int i = 0 ; i < n ; i++) elems[i] = i + 1;

    int rank = 0;
    int i = 1;
    for (int index = 0 ; index < n ; index++){
        int elem = perm[index];

        remove_element(elems, n, elem);
        elems_size--;

        rank += number_of_smaller_elements(elems, elems_size, elem) * factorial(n - i);
        i++;
    }
    free(elems);

    return rank;
}

int string_permutation(char *string){
    int* char_appearance_freq = (int*)malloc(sizeof(int));
    for (int i = 'A' ; i <= 'z' ; i++) char_appearance_freq[i] = 0;

    for (int index = 0 ; index < strlen(string) ; index++){
        char_appearance_freq[string[index]]++;
    }

    int total = factorial(strlen(string));
    for (int index = 'A' ; index < 'z' ; index++){
        total /= factorial(char_appearance_freq[index]);
    }
    free(char_appearance_freq);

    return total;
}

void permutation_cycles(const int *perm, int size) {
    int *visited = (int*)malloc(size * sizeof(int));
    for (int i = 0; i < size; i++) {
        visited[i] = 0;
    }

    for (int i = 0; i < size; i++) {
        if (!visited[i]) {
            printf("(");
            int current = i;

            while (!visited[current]) {
                printf("%d ", current + 1);
                visited[current] = 1;
                current = perm[current] - 1;
            }
            printf("\b)\n");
        }
    }

    free(visited);
}