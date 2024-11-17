#ifndef CTG_ARRAY_FUNCTIONS_H
#define CTG_ARRAY_FUNCTIONS_H

/**
 * Computers the number of strictly smaller elements than n in an array.
 * @param arr Array to check in.
 * @param size Size of the array.
 * @param elem Element we check the numbers strictly smaller than.
 * @return Number of elements with the condition.
 */
int number_of_smaller_elements(const int *arr, int size, int elem);

/**
 * Removes an element from an array.
 * @param arr Array to remove the element from.
 * @param size Size of the array.
 * @param elem Element to remove.
 */
void remove_element(int *arr, int size, int elem);

/**
 * Checks whether an array contains an element or not.
 * @param arr Array to check in.
 * @param size Size of the array.
 * @param elem Element to check for.
 * @return 1 if the element is contained, 0 otherwise.
 */
int contains(const int *arr, int size, int elem);

/**
 * Adds an element in an array;
 * @param arr Array to add the element in.
 * @param size Size of the array.
 * @param elem Element to add.
 */
void add(int *arr, int size, int elem);

#endif
