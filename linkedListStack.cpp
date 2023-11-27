#include "linkedListStack.h"
#include <iostream>
using namespace std;

template <class Type>
void linkedListStack<Type>::initializeStack()
{
	nodeType* temp;
	while(stackTop != nullptr)
	{		
		temp = stackTop;
		stackTop->link = stackTop;
		delete stackTop;
	}
}



bool linkedListStack<Type>::isEmptyStack() const
{
	return(stackTop == nullptr);
}


void linkedListStack<Type>::push(const Type& newItem)
{
	Book* temp = new node<Type>;
	temp->info = newItem; // assigns the value of the temperary book pointer to the address of newItem
}

Type linkedListStack<Type>::top() const
{
	
}

void linkedListStack<Type>::pop() 
{
	
}