#ifndef SEARCH_ALGOS_H
#define SEARCH_ALGOS_H

#include <math.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * struct listint_s - singly linked list
 *
 * @n: Integer
 * @index: Index of the_n
 * @next: Pointer to the next_n
 */


typedef struct listint_s
{
int n;
size_t index;
struct listint_s *next;
} listint_t;

/**
 * struct skiplist_s - Sing link list with
 *
 * @n: Int
 * @index: Index of the node i
 * @next: Pointer
 * @express: Pointer
 *
 */

typedef struct skiplist_s
{
int n;
size_t index;
struct skiplist_s *next;
struct skiplist_s *express;
} skiplist_t;

int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
int jump_search(int *array, size_t size, int value);
int interpolation_search(int *array, size_t size, int value);
int exponential_search(int *array, size_t size, int value);


#endif /*  SEARCH_ALGOS_H */
