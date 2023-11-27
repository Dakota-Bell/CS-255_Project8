#include <iostream>
#include <string>
#include <fstream>
using namespace std;
#include "Book.h"
#include "queueLinkedList.h"
#include "linkedListStack.h"

template <class Type>

class linkedStack
{
	private:
		nodeType<Type>* stackLink;
		nodeType<Type>* temp; // to hold the value of the stackLink at index 0, so we don't have a memory leak 
							  // from not being able to point to the beginning of the stack
	public:
		linkedStack()
		{
			stackLink = nullptr; // initialize with a nullpointer
		}
		
		/*linkedStack<Type>(linkedStack<Book>* newStack)
		{
			stackLink->link = newStack; 
			// that will add the parameter newStack to the list of book types on the stack
		}*/
		
		~linkedStack()
		{
			nodeType<Type>* temp;
			
			while(stackLink != nullptr)
			{
				temp  = stackLink;
				stackLink->link = stackLink;
				delete temp;
			}
		}
};