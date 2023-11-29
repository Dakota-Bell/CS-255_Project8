#include <iostream>
#include "queueLinkedList.h"
#include <string>
using namespace std;
#include <csassert>

template<class Type>

class linkedListType
{
	private:
		nodeType<Type>* stackTop;
		nodeType<Type>* first;
		nodeType<Type>* last;
		int count;
		
	public:
		
		void initializeStack()
		{
			nodeType<Type>* temp;
			while(stackTop != nullptr)
			{		
				temp = stackTop;
				stackTop->link = stackTop;
				delete stackTop;
			}
		}
		
		bool isEmptyStack()const
		{
			return(stackTop == nullptr);
		}
		
		void push(const string& newItem)
		{
			nodeType<Type> *newNode; // declare a pointer var be added to the top
			
			newNode = new nodeType<Type>; // allocate new memory for it
			
			newNode->info = newItem; // assign the value to newItem
			newNode->link  = stackTop; // insert 
			stackTop = newNode;
		}
		
		
		void insert(const Type& item)
		{
			nodeType<Type>* newNode;
			
			newNode = new nodeType<Type>;
			
			newNode->info = item;
			newNode->link = first;
			first = newNode;
			count++;
			
			if(last == nullptr)
			{
				last = newNode;
			}
		}
		
		Type top() const
		{
			assert(stackTop != nullptr);
			
			return stackTop->info;
		}
			
		void pop()
		{
			nodeType<Type> *temp;// to hold value of the top to deallocate
		
			if(stackTop != nullptr) // while stackTop has values
			{
				temp = stackTop; // sets temp the value at the top of the stack
				stackTop = stackTop->link; // stackTop is assigned the value that it links to 
				
				delete temp; // delete the old stackTop
			}
			else
			{
				cout << "Cannot remove from an empty stack." << endl;
			}
		}
			
		void copyList(const linkedListType& otherList)
		{
		    nodeType<Type> *newNode; //pointer to create a node
		    nodeType<Type> *current; //pointer to traverse the list
		
		    //if (stackTop != nullptr) //if the list is nonempty, make it empty
				//initializeStack();
		
		    if (otherList.first == nullptr) //otherList is empty, initialize the bitch
		    {
		        first = nullptr;
		        last = nullptr;
		        count = 0;
		    }
		    else
		    {
		        current = otherList.first; //current points to the
		                                   //list to be copied
		        count = otherList.count;
		
		            //copy the first node
		        first = new nodeType<Type>;  //create the node
		
		        first->info = current->info; //copy the info
		        first->link = nullptr;        //set the link field of
		                                   //the node to nullptr
		        last = first;              //make last point to the
		                                   //first node
		        current = current->link;     //make current point to
		                                     //the next node
		
		           //copy the remaining list
		        while (current != nullptr)
		        {
		            newNode = new nodeType<Type>;  //create a node
		            newNode->info = current->info; //copy the info
		            newNode->link = nullptr;       //set the link of
		                                        //newNode to nullptr
		            last->link = newNode;  //attach newNode after last
		            last = newNode;        //make last point to
		                                   //the actual last node
		            current = current->link;   //make current point
		                                       //to the next node
		        }
		    }
		}
	
			
		linkedListType() // constructor
		{
			stackTop = nullptr;
			first = nullptr;
			last = nullptr;
		}
			
		//template <class Type>
		linkedListType<Type>& operator=(const linkedListType<Type>& otherQueue)
		{
	    //Write the definition of to overload the assignment operator
	    
		    if(this != &otherQueue) // if me (pointer) is not equal to the address of otherQueue
		    {
		    	copyList(otherQueue); // make a copy of the otherQueue
			}
			return *this; // return me (pointer) dereferenced
	
		} //end assignment operator
		
			
		~linkedListType() // destructor
		{
			initializeStack(); // no need to rewrite what has already been written
		}
};
