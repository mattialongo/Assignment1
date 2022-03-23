
/** @file myFIFO.h
 * @brief myFIFO.h contains the functions prototype of a FIFO
 *
 * The functions are:
 * MyFIFOInit inizialize the FIFO and it fix all the elements to 0
 * MyFIFOInsert has the goal to add a specific integer value in the FIFO, passed as parameter
 * MyFIFORemove has the goal to remove the oldest element in the FIFO
 * MyFIFOPeep has the goal to return the oldest element in the FIFO, without remove any element
 * MyFIFOSize return the number of elements in the FIFO
 * 
 * @author Mattia Longo and Giacomo Bego
 * @date 23 March 2022
 * @bug No known bugs.
 */

#ifndef _myFIFO_h
#define _myFIFO_h

/**
 * @brief MyFIFOInit inizialize the FIFO
 *
 * MyFIFOInit inizialize the FIFO and 
 * it fix all the elements to 0
 * @param is the maximum number of element that the FIFO can contain

 * @return -1 if the size of the parameter is invalid (max_size <=0), otherwise 0 
 */
 
int MyFIFOInit(int max_size);

/**
 * @brief MyFIFOInsert add a specific integer value in the FIFO, passed as parameter
 *
 * MyFIFOInsert wants to add an integer value to a FIFO of a integers
 * Anyway MyFIFOInsert has the goal to verify first of all
 * if the FIFO is full, in that case it does not proceed to insert the element
 *
 * @param is integer value candidated to be added as an element to the FIFO

 * @return -1 if the FIFO is full, 0 otherwise
 */

int MyFIFOInsert(int value);

/**
 * @brief MyFIFORemove wants remove the oldest element in the FIFO
 *
 * If the FIFO is empty it does not proceed and an error value is returned
 * If the FIFO is not empty it proceed to remove the oldest element in the FIFO
 * 
 * @return -1 if the FIFO is empty, otherwise 0
 */

int MyFIFORemove(void);

/**
 * @brief MyFIFOPeep return the oldest element of the FIFO
 *
 * If the FIFO is empty it does not proceed and an error value is returned
 * If the FIFO is not empty it proceed to return the oldest element in the FIFO,
 * without remove any element
 * 
 * @return NULL if the FIFO is empty, otherwise it returns the oldest value
 */

int MyFIFOPeep(void);

/**
 * @brief MyFIFOSize return the size of the FIFO
 *
 * MyFIFOSize has the unique goal to return the number of the
 * elements in the FIFO 
 *
 * @return the number of elements in the FIFO in this moment
 */

int MyFIFOSize(void);



#endif
