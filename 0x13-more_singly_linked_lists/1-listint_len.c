#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * listint_len - returns the lenght of a list;
 * @h:pointer to the head of a list.
 *
 * Return: length (INT) of a list.
 */
size_t listint_len(const listint_t *h) 
{ 	
	
	size_t n_nodes = 0; 	
	
	if (!h) 		
		
		return (0); 	
	
	while (h) 	
	{ 		
		
		n_nodes++; 		
		h = h->next; 	
	} 	
	return (n_nodes); 
}

