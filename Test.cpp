#include "Test.h"
using namespace std;

void Test::runTests()
{
	cout << "\nTESTS STARTED\n_____________\n\n";
	startSize();
	isEmpty();
	addBack();
	addFront();
	removeBack();
	removeFront();
	emptyRemoveFront();
	emptyRemoveBack();
	sizeAddFront();
	sizeAddBack();
	sizeRemoveBack();
	sizeRemoveFront();
	search();
	cout << "_____________\nTESTS FINSISHED\n\n";
}
void Test::startSize()
{
	LinkedListOfInts* newList = new LinkedListOfInts();

	if (newList -> size() == 0)
	{
		cout << "1. List start size is zero: PASSED.\n";
	}
	else
	{
		cout << "1. List start size is zero: FAILED.\n";
	}
}
void Test::isEmpty()
{
	LinkedListOfInts* newList = new LinkedListOfInts();

  if (newList -> isEmpty())
	{
    cout << "2. isEmpty returns true on new list: PASSED.\n";
	}
  else
	{
    cout << "2. isEmpty returns true on new list: FAILED.\n";
	}
}

void Test::addBack()
{
	LinkedListOfInts* newList = new LinkedListOfInts();
	newList -> addBack(0);
	newList -> addBack(0);
	newList -> addBack(1);
	Node<int> node = newList -> toVector().at(2);

	if (node.getValue() == 1)
	{
		cout << "3. One new element is added to back of list: PASSED.\n";
	}
	else
	{
		cout << "3. One new element is added to back of list: FAILED.\n";
	}
}

void Test::addFront()
{
	LinkedListOfInts* newList = new LinkedListOfInts();
	newList -> addFront(3);
	newList -> addFront(2);
	newList -> addFront(1);
	Node<int> node = newList -> toVector().at(0);

	if (node.getValue() == 1)
	{
		cout << "4. One new element added to the front of the list: PASSED.\n";
	}
	else
	{
		cout << "4. One new element added to the front of the list: FAILED.\n";
	}
}

void Test::removeBack()
{
	LinkedListOfInts* newList = new LinkedListOfInts();
	newList -> addFront(3);
	newList -> addFront(2);
	newList -> addFront(1);
	bool test = newList -> removeBack();
	Node<int> node = newList -> toVector().at(1);

	if (node.getValue() == 2 && node.getNext() == nullptr)
	{
		cout << "5. One element is removed from the back of the list: PASSED.\n";
	}
	else
	{
		cout << "5. One element is removed from the back of the list: FAILED.\n";
	}
	if(test)
		cout << "6. removeBack returns true after removing element: PASSED.\n";
	else
		cout << "6. removeBack returns true after removing element: FAILED.\n";
}

void Test::removeFront()
{
	LinkedListOfInts* newList = new LinkedListOfInts();
	newList -> addFront(3);
	newList -> addFront(2);
	newList -> addFront(1);
	bool test = newList -> removeFront();
	Node<int> node = newList -> toVector().at(0);
	Node<int> node1 = newList -> toVector().at(2);

	if (node.getValue() == 2 && node1.getNext() == nullptr)
	{
		cout << "7. One element is removed from the front of list: PASSED.\n";
	}
	else
	{
		cout << "7. One element is removed from the front of list: FAILED.\n";
	}
	if(test)
		cout << "8. removeFront returns true after removing element: PASSED.\n";
	else
		cout << "8. removeFront returns true after removing element: FAILED.\n";
}

void Test::emptyRemoveFront()
{
	LinkedListOfInts* newList = new LinkedListOfInts();
	bool test = newList -> removeFront();

	if (test)
		cout << "9. removeFront returns false for empty list: FAILED.\n";
	else
		cout << "9. removeFront returns false for empty list: PASSED.\n";
}

void Test::emptyRemoveBack()
{
	LinkedListOfInts* newList = new LinkedListOfInts();
	bool test = newList -> removeBack();

	if (test)
		cout << "10. removeBack returns false for empty list: FAILED.\n";
	else
		cout << "10. removeBack returns false for empty list: PASSED.\n";
}

void Test::sizeAddFront()
{
	LinkedListOfInts* newList = new LinkedListOfInts();
	newList -> addFront(1);
	newList -> addFront(1);
	newList -> addFront(1);

	if (newList -> size() == 3)
	{
		cout << "11. Size returns correct value after addFront: PASSED.\n";
	}
	else
	{
		cout << "11. Size returns correct value after addFront: FAILED.\n";
	}
}

void Test::sizeAddBack()
{
	LinkedListOfInts* newList = new LinkedListOfInts();
	newList -> addBack(1);
	newList -> addBack(1);
	newList -> addBack(1);

	if (newList -> size() == 3)
	{
		cout << "12. Size returns correct value after addBack: PASSED.\n";
	}
	else
	{
		cout << "12. Size returns correct value after addBack: FAILED.\n";
	}
}

void Test::sizeRemoveBack()
{
	LinkedListOfInts* newList = new LinkedListOfInts();
	newList -> addFront(3);
  newList -> addFront(2);
  newList -> addFront(1);
  newList -> removeBack();

	if (newList -> size() == 2)
	{
		cout << "13. Size returns correct value after removeBack: PASSED.\n";
	}
	else
	{
		cout << "13. Size returns correct value after removeBack: FAILED.\n";
	}
}

void Test::sizeRemoveFront()
{
	LinkedListOfInts* newList = new LinkedListOfInts();
	newList -> addFront(3);
  newList -> addFront(2);
  newList -> addFront(1);
  newList -> removeFront();
	if (newList -> size() == 2)
	{
		cout << "14. Size returns correct value after removeFront: PASSED.\n";
	}
	else
	{
		cout << "14. Size returns correct value after removeFront: FAILED.\n";
	}
}

void Test::search()
{
	LinkedListOfInts* newList = new LinkedListOfInts();
	newList -> addFront(3);
	newList -> addFront(2);
	newList -> addFront(1);
	if (newList -> search(1) && newList -> search(4) == false)
	{
		cout << "15. Search returns true only for existing values: PASSED.\n";
	}
	else
	{
		cout << "15. Search returns true only for existing values: FAILED.\n";
	}

}
