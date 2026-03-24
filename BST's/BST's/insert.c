#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "main.h"

struct Node* insertNodes(struct Node* ptr, char data) {

	//Decleration
	struct Node* node;
	struct Node* newNode;

	if (ptr == NULL) {

		//Assign data to the new node
		node = malloc(sizeof(struct Node));
		if (node == NULL) {
			printf("Error: No memory avaliable to create a root node!\n");
			return NULL;
		}
		node->data = data;
		node->left = NULL; //Set the right pointer to null
		node->right = NULL; //Set the left pointer to null
		printf("Successfully created a new node!\n");
		return node; //Return the root node address for tracking, and future nodes for insertion

	} else {

		//Check if the rrot node is NULL
		if (ptr == NULL) {
			printf("Error: The root node is null!\n");
			return NULL;
		}

		//Check if the value is less than or greater than
		if (data < ptr->data) {
			ptr->left = insertNodes(ptr->left, data); //Assign the new node to the left
			//printf("Created a new node to the left!\n");
		}
		else if (data > ptr->data) {
			ptr->right = insertNodes(ptr->right, data); //Assign the new node to the right
		}

	}

}