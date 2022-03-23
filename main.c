
/* Includes */
#include <stdio.h>
#include <stdlib.h>
#include "myFIFO.h"


/**
 * @brief Brief decription of main().
 *
 * Here it goes the long description of main()
 * main has no input arguments.
 * It declares two variables and calls function1() using them 
 * as argument. 
 * It then prints the result and returns.
 * 
 * @return main() always returns 0
 */
 

 
int main(void)
{
	/* Variable declaration and init */
	int vect_size; 	
	int element;
	
	/*FIFO initialization*/  	
	printf("Write FIFO maximum size: ");
	scanf("%d",&vect_size);
	
	if(MyFIFOInit(vect_size)==-1){
		printf("The size of FIFO must be positive\n");
		return 0;
	}
	else{
		printf("FIFO initialized\n");
	}
	
	
	
	/*Insert elements in FIFO */
	printf("Write the first element to insert in FIFO: ");
	scanf("%d",&element);
	
	if(MyFIFOInsert(element)==-1){
		printf("The FIFO is full. Delete some element if you want insert them\n");
	}
	else{
		printf("Element inserted in FIFO\n");
	}
	
	printf("Write the second element to insert in FIFO: ");
	scanf("%d",&element);
	
	if(MyFIFOInsert(element)==-1){
		printf("The FIFO is full. Delete some element if you want insert them\n");
	}
	else{
		printf("Element inserted in FIFO\n");
	}
	
	printf("Write the third element to insert in FIFO: ");
	scanf("%d",&element);
	
	if(MyFIFOInsert(element)==-1){
		printf("The FIFO is full. Delete some element if you want insert them\n");
	}
	else{
		printf("Element inserted in FIFO\n");
	}
	
	
	
	/*Return the size of FIFO */
	printf("The size of FIFO is: %d\n", MyFIFOSize());
	
		
	
	/*Delete one elements */
	printf("Delete one element\n");
	
	if(MyFIFORemove()==-1){
		printf("The FIFO is empty. Nothing to remove\n");
	}
	else{
		printf("One element removed\n");
	}
	
	
	
	/*Show the oldest element*/
	if(MyFIFOPeep()==NULL){
		printf("There isn't any element to show\n");
	}
	else{
		printf("The oldest element is: %d\n",MyFIFOPeep());
	}
	
	
	
	
	/* And finish */
	return 0;
}
