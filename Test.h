#ifndef TEST_H
#define TEST_H

#include <iostream>
#include "LinkedListOfInts.h"

class Test
{
public:
	void runTests();

	//makes sure list is inizialized empty
	void startSize();

//  @return true if the list is empty, false otherwise.
	void isEmpty();

	// @post One new element added to the end of the list.
	void addBack();

	// @post One new element added to the front of the list.
	void addFront();

	//   @post One element is removed from the back of the list.
	void removeBack();

	// @post One element is removed from the front of the list.
	void removeFront();

	//  @return true if the element was removed, false if the list is empty.
	void emptyRemoveFront();
	void emptyRemoveBack();

	//   @return the number of elements in the list.
	void sizeAddFront();
	void sizeAddBack();
	void sizeRemoveBack();
	void sizeRemoveFront();

	//   @return true is the value is in the list, false otherwise.
	void search();



};

#endif
