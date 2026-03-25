#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "main.h"

int determineHeight(struct Node* ptr) {

	if (ptr == NULL) {
		return 0;
	}

	//Get the heights of both the left and right subtrees
	int leftTreeHeight = determineHeight(ptr->left);
	int rightTreeHeight = determineHeight(ptr->right);

	int h = (leftTreeHeight > rightTreeHeight ? leftTreeHeight : rightTreeHeight) + 1;
	printf("Node %c at %p: height = %d\n", ptr->data, (void*)ptr, h);
	return (leftTreeHeight > rightTreeHeight ? leftTreeHeight : rightTreeHeight) + 1;

}