#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"


/**
 *
 * pop_listint - eliminates the first node of a linked list.
 * @head: pointer to the front  element in the linked list.
 *
 * Return: the value  inside the elements that was removed,
 * or 0 if the list is empty
 */

int pop_listint(listint_t **head)

{

	        listint_t *temp;

	        int num;

	        if (!head || !*head)

		                return (0);

	        num = (*head)->n;
	        temp = (*head)->next;
	        free(*head);
	        *head = temp;

	        return (num);
}
