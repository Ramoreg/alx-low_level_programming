#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * reverse_listint - to reverse a linked list.
 * @head: pointer to the lists first node.
 *
 * Return: pointer to the first node in the new list
 */
listint_t *reverse_listint(listint_t **head)
{

        listint_t *prev = NULL;
        listint_t *next = NULL;

        while (*head)

        {

                next = (*head)->next;
                (*head)->next = prev;
                prev = *head;
                *head = next;

        }

        *head = prev;

        return (*head);
}
