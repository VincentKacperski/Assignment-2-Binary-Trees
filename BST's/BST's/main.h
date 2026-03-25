#pragma once
struct Node {
	char data;
	struct Node* left;
	struct Node* right;
};

//Program header files
struct Node* insertNodes(struct Node* ptr, char data);
int determineHeight(struct Node* rootNode);
char searchNodes(struct Node* newPtr, char data);
int printTraversal(struct Node* rootNode);
int countNodes(struct Node* ptr);