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





}