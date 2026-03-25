#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <time.h> 
#include "main.h"

int main() {

	//Decleration
	int choice = 1; //Add 1 to enter the menu while loop
	char keydata = '0';
	char array[26] = { 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z' };
	struct Node* rootNode = NULL;
	struct Node* nodePtr = NULL;

	//Create the root node, and store a refrence
	rootNode = insertNodes(rootNode, array[rand() % 20]);
	nodePtr = rootNode; //Assign the root node to ptr for traversal and searching
	printf("rootNode1: %p\n", nodePtr);
	printf("Creating a refrence to the root node!\n");

	while (choice > 0 && choice < 5) {

		//Main menu
		printf("\n");
		printf("What operation would you like to perform?\n");
		printf("1:Insert a new node into the tree.\n");
		printf("2:Search for a node in the tree.\n");
		printf("3:Count all nodes in the tree.\n");
		printf("4:Calculate the trees height.\n");
		printf("5:Print all chars in alphabetical order.\n");
		printf("Enter a menu option: ");
		scanf_s("%d", &choice);
		printf("\n");

		switch (choice) {

			case 1: {

				//Insert a node in the tree
				keydata = array[(rand() % 20) + 1]; //Assign a random character
				nodePtr = insertNodes(nodePtr, keydata); //Keep track of the root node
				break;

			} case 2: {

				//Search for a node in the tree
				printf("Enter a character to search: ");
				scanf_s(" %c", &keydata, 1); //Read in a keky value for the new node
				keydata = searchNodes(rootNode, keydata); 
				printf("The searched node character value is: %c\n", keydata); //When found print it's data
				break;

			} case 3: {

			} case 4: {

			} case 5: {

			} default: {
	
			}
		}
	}
}