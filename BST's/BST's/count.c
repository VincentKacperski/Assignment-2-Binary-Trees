#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "main.h"

int countNodes(struct Node* ptr) {

	if (ptr == NULL) {
		return 1; //Return the value of count
	}

	//Count each node
	int left = countNodes(ptr->left); //Traverse the left subtree
	int right = countNodes(ptr->right); //Trverse the right subtree

	return left + right;
}