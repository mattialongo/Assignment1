/*
* This is MyFIFOInit.c
* Version is: 1 
*/

#include <stdio.h>
#include "MyFIFOIniti.h"

void MYFIFOInit(int size) 
{
	static int vect[size]; 
	
	for(int i=0;i<size;i++){
		vect[i]=0;
	}
	
	return vect;
}
