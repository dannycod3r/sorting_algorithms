#ifndef _SORT_H_
#define _SORT_H_

#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>

/*predefined data structure*/
/**
 * struct listint_s - Doubly linked list node
 *
 * @n: Integer stored in the node
 * @prev: Pointer to the previous element of the list
 * @next: Pointer to the next element of the list
 */
typedef struct listint_s
{
	const int n;
	struct listint_s *prev;
	struct listint_s *next;
} listint_t;


/*alx helper functions prototype*/
void print_array(const int *array, size_t size);
void print_list(const listint_t *list);

/*project helper functions*/
void bubble_sort(int *array, size_t size);
void swap_int(int *first_int, int *second_int);
listint_t *create_listint(const int *array, size_t size);
void insertion_sort_list(listint_t **list);
void selection_sort(int *array, size_t size);
void quick_sort(int *array, size_t size);
void _quick_sort(int *array, int low, int high, int size);
int lomuto(int *array, int low, int high, int size);


#endif
