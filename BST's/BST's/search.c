#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "main.h"

char searchNodes(struct Node* ptr, char data) {

	printf("Node: %p\n", (void*)ptr);

	//Check if the search value has been found
	if (ptr == NULL) {
		printf("Error: Last node reached, no data found!\n");
		return NULL;
	}

	//Check if the search value has been found
	printf("ptr->data: %c, data: %c\n", ptr->data, data);
	if (data == ptr->data) {
		return data;
	}

	if (data > ptr->data) {
		return searchNodes(ptr->right, data); //Traverse to the left next node
	}
	else {
		if (data < ptr->data) {
			return searchNodes(ptr->left, data); //Traverse to the right next node
		}
	}
}