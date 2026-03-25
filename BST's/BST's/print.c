#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "main.h"

int printTraversal(struct Node* rootNode) {

	//Check if the least node is a leaf node
	if (rootNode == NULL) {
		return;
	}

	printTraversal(rootNode->left); //Move to the left node
	printf("Data: %c\n", rootNode->data);
	printTraversal(rootNode->right); //Move to the right node

}