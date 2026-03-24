#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <time.h> 
#include "main.h"

int main() {

	//Decleration
	int choice = 1; //Add 1 to enter the menu while loop

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

			} case 2: {

			} case 3: {

			} case 4: {

			} case 5: {

			} default: {
	
			}
		}
	}
}