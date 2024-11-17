#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#include "utility_functions.h"

int factorial(int n){
    int fact = 1;
    for (int i = 2 ; i <= n ; i++) fact = fact * i;

    return fact;
}