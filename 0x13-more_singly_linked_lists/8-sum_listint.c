#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h" 

/**
 * sum_listint - the entire sum of data the data in a listint_t list is calculated.
 * @head: first node in the linked list.
 *
 * Return: sum of result being calculated.
 */
int sum_listint(listint_t *head)
{

	        int sum = 0;
	        listint_t *temp = head;

	        while (temp)

		        {

			                sum += temp->n;
			                temp = temp->next;

			        }

	        return (sum);
}
