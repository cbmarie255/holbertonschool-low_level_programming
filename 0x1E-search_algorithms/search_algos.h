#ifndef __SEARCH_ALGOS_H__
#define __SEARCH_ALGOS_H__

/**
 * struct listint_s - singly linked list
 *
 * @n: Integer
 * @index: Index of the node in the list
 * @next: Pointer to the next node
 *
 * Description: singly linked list node structure
 * for Holberton project
 */
typedef struct listint_s
{
	int n;
	size_t index;
	struct listint_s *next;
} listint_t;

/**
 * struct skiplist_s - Singly linked list with an express lane
 *
 * @n: Integer
 * @index: Index of the node in the list
 * @next: Pointer to the next node
 * @express: Pointer to the next node in the express lane
 *
 * Description: singly linked list node structure with an express lane
 * for Holberton project
 */
typedef struct skiplist_s
{
	int n;
	size_t index;
    struct skiplist_s *next;
    struct skiplist_s *express;
} skiplist_t;

int linear_search(int *array, size_t size, int value);
void print_subarray(int *array, size_t left, size_t right);
int binary_search(int *array, size_t size, int value);
int advanced_binary(int *array, size_t size, int value);
void print_array(const int *array, size_t size);

#endif
