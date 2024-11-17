#ifndef CTG_PERMUTATION_H
#define CTG_PERMUTATION_H

/**
 * Computes the next permutation in lexicographical order of a given permutation.
 * @param perm Permutation to compute the successor for.
 * @param n Size of the permutation.
 */
void next_permutation(int *perm, int n);

/**
 * Computes the rank of a given permutation
 * @param perm Permutation to compute the rank for.
 * @param n Size of the permutation.
 * @return Rank of the permutation.
 */
int permutation_rank(const int *perm, int n);

/**
 * Computes the number of ways the characters (with repetition) of a string can be rearranged.
 * @param string String to compute the number of ways.
 * @return Number of ways to rearrange the characters.
 */
int string_permutation(char *string);

/**
 * Computes the cycle decomposition of a given permutation.
 * @param perm Permutation to analyze.
 * @param size Size of the permutation.
 */
void permutation_cycles(const int *perm, int size);

#endif
