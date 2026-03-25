#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <time.h> 
#include "main.h"

//Refrences for understanding trees
//https://conestoga.desire2learn.com/d2l/le/content/1521987/viewContent/31930063/View
//https://conestoga.desire2learn.com/d2l/le/content/1521987/viewContent/31930041/View
//https://www.geeksforgeeks.org/dsa/binary-search-tree-set-1-search-and-insertion/
//https://www.geeksforgeeks.org/dsa/find-the-maximum-depth-or-height-of-a-tree/
//https://www.geeksforgeeks.org/dsa/count-number-of-nodes-in-a-complete-binary-tree/

int main() {

	//Decleration
	int choice = 1; //Add 1 to enter the menu while loop
	int lock = 0;
	char keydata = '0';
	char array[26] = { 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z' };
	struct Node* rootNode = NULL;
	struct Node* nodePtr = NULL;

	//Create the root node, and store a refrence
	rootNode = insertNodes(rootNode, array[rand() % 26]);
	nodePtr = rootNode; //Assign the root node to ptr for traversal and searching
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
				if (lock == 0) {
					int seed = (rand() % (20 - 11 + 1)) + 11;
					//Generate a random number of nodes between 11 and 20
					for (int i = 0; i < seed; i++) {
						keydata = array[(rand() % 26)]; //Assign a random character
						nodePtr = insertNodes(nodePtr, keydata); //Keep track of the root node
					}
					lock = 1;
				} else {
					printf("Tree already created!\n");
				}
				break;

			} case 2: {

				//Search for a node in the tree
				printf("Enter a character to search: ");
				scanf_s(" %c", &keydata, 1); //Read in a keky value for the new node
				keydata = searchNodes(rootNode, keydata); 
				printf("The searched node character value is: %c\n", keydata); //When found print it's data
				break;

			} case 3: {

				//Count all nodes in the tree
				int total = countNodes(rootNode); //recursivley check each node
				printf("Total node cout: %d\n", total); //Print the total node count
				break;

			} case 4: {

				//Get the trees heights
				int height = determineHeight(rootNode);
				//printDebug(rootNode);
				printf("The height of the tree is: %d\n", height);
				break;

			} case 5: {

				//Traverse the tree and print all nodes in alphabetical order
				printTraversal(nodePtr);
				break;

			} default: {
	
			}
		}
	}
}