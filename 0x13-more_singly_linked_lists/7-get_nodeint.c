#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"


/**
 * get_nodeint_at_index - brings back  the node at a certain point in a linked list.
 * @head: first node in the linked list.
 * @index: returns index of the node.
 *
 * Return: pointer to the missing node, or NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)

{

	        unsigned int i = 0;

	        listint_t *temp = head;

	        while (temp && i < index)

		        {

			                temp = temp->next;

			                i++;

			        }

	        return (temp ? temp : NULL);

}
