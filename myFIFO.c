/*
* This is myFIFO.c
* Version is: 1 
*/

#include <stdio.h>

static int size;

static int vect[];

/* Index indicate tne last value !!! */
static int index=-1;

int MyFIFOInit(int max_size) 
{
	
	int vect[max_size];
	
	if(max_size<=0){
		return -1;
	}
	else{
		size=max_size;
	
		for(int i=0;i<size;i++){
			vect[i]=0;
		}
		
		return 0;
	}
}


int MyFIFOInsert(int value) 
{
	if(index>=size-1){
	
		return -1;
	}
	else{	
		index++;
		for(int i=index;i>0;i--){
			vect[i]=vect[i-1];
		}
		
		vect[0]=value;
		
		return 0;
	}	
	
}


int MyFIFORemove()
{
	if(index<0){
		return -1;
	}
	else{
		vect[index]=0;
		index--;
		
		return 0;
	}	
	
}


int MyFIFOPeep()
{
	if(index<0){
		return NULL;
	}
	else{
		return vect[index];
	}
}


int MyFIFOSize()
{
	return index+1;
}







