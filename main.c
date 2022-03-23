/** @file main.c
 * @brief contains the main fuction of the assignment1 - P1
 *
 * The goal of this code is to verify the correct behaviour
 * of the module myFIFO.c which contains some basic fuctions
 * for a FIFO data structure. 
 * In particular, this file contains the main() function
 * 
 * @author Mattia Longo and Giacomo Bego
 * @date 22 March 2022
 * @bug No known bugs
 */


/* Includes */
#include <stdio.h>
#include <stdlib.h>
#include "myFIFO.h"


/**
 * @brief main functions verify the rightness of myFIFO functions
 *
 * main function has the goal to use all the function
 * described in myFIFO.c file those can be chosen by the standard input
 * A visible feedback by the printf command is used.
 * 
 * @return main() always return 0
 */
 
 
int main(void)
{
	/* Variable declaration and init */
	int vect_size; 	
	int element;
	char key;
	
	/*FIFO initialization*/  	
	printf("Digit the FIFO maximum size: ");
	scanf("%d",&vect_size);
	
	if(MyFIFOInit(vect_size)==-1){
		printf("The size of FIFO must be positive!! \n");
		return 0;
	}
	else{
		printf("FIFO initialized\n");
	}
	
	while(1){
		printf("insert a key (i=insert, r=remove, p=peep, s=size, anything else= exit): ");
		scanf(" %c",&key);
		if(key=='i'){
	
			/*Insert elements in FIFO */
			printf("Digit the element to insert in FIFO: ");
			scanf("%d",&element);
	
			if(MyFIFOInsert(element)==-1){
				printf("The FIFO is full. Delete some element if you want insert them\n");
			}
			else{
				printf("Element inserted in FIFO\n");
			}
			
		}
		else if(key=='r'){
		
			/*Delete one elements */
			if(MyFIFORemove()==-1){
				printf("The FIFO is empty. Nothing to remove\n");
			}
			else{
				printf("One element removed\n");
			}
		}
		else if(key=='p'){
			/*Show the oldest element*/
			if(MyFIFOPeep()==NULL){
				printf("There isn't any element to show\n");
			}
			else{
				printf("The oldest element is: %d\n",MyFIFOPeep());
			}
		}
		else if(key=='s'){
			/*Return the size of FIFO */
			printf("The size of FIFO is: %d\n", MyFIFOSize());
		}
		else{
			return 0;
		}
	}
	
	/* And finish */
	return 0;
	}
