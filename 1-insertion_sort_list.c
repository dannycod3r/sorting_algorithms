#include "sort.h"

/**
 * insertion_sort_list - sorts a doubly linked list of integers in ascending
 *                       order using the Insertion sort algorithm
 * @list: Pointer to the head of the doubly linked list
 *
 * Return: Nothing
 */

void insertion_sort_list(listint_t **list)
{
	listint_t *current_node, *temp, *old_next, *old_prev;

	if (list == NULL || *list == NULL) /*check if list is available and*/
		return;

	current_node = (*list)->next;

	/* outer loop to run through the list(to make we get to end of list*/
	while (current_node)
	{
		temp = current_node;
		current_node = current_node->next;

		/*inner loop to insert numbers at right positions*/
		while (temp->prev != NULL && (temp->prev->n > temp->n))
		{
			/*initiate the swapping process old = prev & next of current node*/
			old_prev = temp->prev;
			old_next = temp->next;

			if (old_prev->prev)
				old_prev->prev->next = temp;
			else
				*list = temp;

			temp->prev = old_prev->prev;
			temp->next = old_prev;
			old_prev->prev = temp;
			old_prev->next = old_next;

			if (old_next)
				old_next->prev = old_prev;
			/*prints a new list with current node in right position*/
			print_list(*list);


		}
	}


}