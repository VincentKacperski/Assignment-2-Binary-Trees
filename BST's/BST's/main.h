#pragma once
struct Node {
	char data;
	struct Node* left;
	struct Node* right;
};

//Program header files
struct Node* insertNodes(struct Node* ptr, char data);