#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "GTC/permutation/permutation.h"

int main() {
    // Test
    int perm[] = {4, 1, 2, 5, 6, 3};
    char *string = "MISSISSIPPI";
    int size = 6;

    next_permutation(perm, size);
    permutation_cycles(perm, size);
    printf("%d\n", permutation_rank(perm, size));
    printf("%d\n", string_permutation(string));
}