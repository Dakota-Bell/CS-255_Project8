//Header file linkedQueue.h

#ifndef H_linkedQueue
#define H_linkedQueue

#include "linkedStack.h"

#include <iostream>
#include <cassert>

using namespace std;

template <class Type>
 
// YES YOU CAN HAVE A STRUCT INSIDE THE SAME FILE AS THE CLASS FILE
class linkedQueueType
{
public:
    const linkedQueueType<Type>& operator=(const linkedQueueType<Type>&);
      //Overload the assignment operator.

    bool isEmptyQueue() const;
      //Function to determine whether the queue is empty.
      //Postcondition: Returns true if the queue is empty,
      //               otherwise returns false.

    bool isFullQueue() const;
      //Function to determine whether the queue is full.
      //Postcondition: Returns true if the queue is full,
      //               otherwise returns false.

    void initializeQueue();
      //Function to initialize the queue to an empty state.
      //Postcondition: queueFront = nullptr; queueRear = nullptr

    Type front() const;
      //Function to return the first element of the queue.
      //Precondition: The queue exists and is not empty.
      //Postcondition: If the queue is empty, the program
      //               terminates; otherwise, the first
      //               element of the queue is returned.

    Type back() const;
      //Function to return the last element of the queue.
      //Precondition: The queue exists and is not empty.
      //Postcondition: If the queue is empty, the program
      //               terminates; otherwise, the last
      //               element of the queue is returned.

    void addQueue(const Type& queueElement);
      //Function to add queueElement to the queue.
      //Precondition: The queue exists and is not full.
      //Postcondition: The queue is changed and queueElement
      //               is added to the queue.

    void deleteQueue();
      //Function  to remove the first element of the queue.
      //Precondition: The queue exists and is not empty.
      //Postcondition: The queue is changed and the first
      //               element is removed from the queue.

	copyList(const linkedQueueType& otherList);

    linkedQueueType();
      //Default constructor

    linkedQueueType(const linkedQueueType<Type>& otherQueue);
      //Copy constructor

    ~linkedQueueType();
      //Destructor

private:
    nodeType<Type> *queueFront; //pointer to the front of
                                //the queue
    nodeType<Type> *queueRear;  //pointer to the rear of
                                //the queue
};

template <class Type>
const linkedQueueType<Type>&::linkedQueueType<Type> operator=(const linkedQueueType<Type>& otherQueue)
{
	//Write the definition of to overload the assignment operator
    
	if(this != &otherQueue) // if me (pointer) is not equal to the address of otherQueue
	{
	    copyQueue(otherQueue); // make a copy of the otherQueue
	}
	return *this; // return me (pointer) dereferenced

} //end assignment operator

template <class Type>
copyQueue(const linkedQueueType& otherList)
{
	nodeType<Type> *newNode; //pointer to create a node
    nodeType<Type> *current; //pointer to traverse the list
	
	if (queueFront != nullptr) //if the list is nonempty, make it empty
	       ~linkedQueueType();
		
	if (otherList.queueFront == nullptr) //otherList is empty
	{
	    queueFront = nullptr;
	    queueBack = nullptr;
	    count = 0;
	}
	else
	{
	    current = otherList.queueFront; //current points to the
	                                   //list to be copied
	    count = otherList.count;
		
	        //copy the first node
	    newNode = new nodeType<Type>;  //create the node
		
	    newNode->info = current->info; //copy the info
	    newNode->link = nullptr;        //set the link field of
		                                   //the node to nullptr
	    queueBack = queueFront;              //make last point to the
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
			queueBack->link = newNode;  //attach newNode after last
			queueBack = newNode;        //make last point to
			                                   //the actual last node
			current = current->link;   //make current point
			                                       //to the next node
	    }
	}
}


    //Default constructor
template <class Type>
linkedQueueType<Type>::linkedQueueType()
{
    queueFront = nullptr; //set front to nullptr	
    queueRear = nullptr;  //set rear to nullptr
} //end default constructor

template <class Type>
bool linkedQueueType<Type>::isEmptyQueue() const
{
    return (queueFront == nullptr);
} //end isEmptyQueue

template <class Type>
bool linkedQueueType<Type>::isFullQueue() const
{
    return false;
} //end isFullQueue

template <class Type>
void linkedQueueType<Type>::initializeQueue()
{
    nodeType<Type> *temp;

    while (queueFront!= nullptr)  //while there are elements
                                  //left in the queue
    {
        temp = queueFront;  //set temp to point to the
                            //current node
        queueFront = queueFront->link;  //advance first to
                                        //the next node
        delete temp;    //deallocate memory occupied by temp
    }

    queueRear = nullptr;  //set rear to nullptr
} //end initializeQueue


template <class Type>
void linkedQueueType<Type>::addQueue(const Type& newElement)
{
    nodeType<Type> *newNode;

    newNode = new nodeType<Type>;   //create the node

    newNode->info = newElement; //store the info
    newNode->link = nullptr;    //initialize the link
                                //field to nullptr

    if (queueFront == nullptr) //if initially the queue is empty
    {
        queueFront = newNode;
        queueRear = newNode;
    }
    else        //add newNode at the end
    {
        queueRear->link = newNode;
        queueRear = queueRear->link;
    }
}//end addQueue

template <class Type>
Type linkedQueueType<Type>::front() const
{
    assert(queueFront != nullptr);
    return queueFront->info;
} //end front

template <class Type>
Type linkedQueueType<Type>::back() const
{
    assert(queueRear!= nullptr);
    return queueRear->info;
} //end back

template <class Type>
void linkedQueueType<Type>::deleteQueue()
{
    nodeType<Type> *temp;

    if (!isEmptyQueue())
    {
        temp = queueFront;  //make temp point to the
                            //first node
        queueFront = queueFront->link; //advance queueFront

        delete temp;    //delete the first node

        if (queueFront == nullptr) //if after deletion the
                                   //queue is empty
            queueRear = nullptr;   //set queueRear to nullptr
    } 
    else
        cout << "Cannot remove from an empty queue" << endl;
}//end deleteQueue


    //Destructor
template <class Type>
linkedQueueType<Type>::~linkedQueueType()
{
    //Write the definition of the destructor
    
    deleteQueue(); // just use the deleteQueue method, no need to rewrite it
    // delete all the dynamically allocated nodeTypes
    
} //end destructor

template <class Type>
const linkedQueueType<Type>& linkedQueueType<Type>::operator=(const linkedQueueType<Type>& otherQueue)
{
    //Write the definition of to overload the assignment operator
    
    if(this != &otherQueue) // if me (pointer) is not equal to the address of otherQueue
    {
    	copyList(otherQueue); // make a copy of the otherQueue
	}
	return *this; // return me (pointer) dereferenced

} //end assignment operator

	//copy constructor
template <class Type>
linkedQueueType<Type>::linkedQueueType(const linkedQueueType<Type>& otherQueue)
{
    //Write the definition of the copy constructor
    nodeType<Type> *newNode; // 
    nodeType<Type> * current;
    
    if(queueFront != nullptr)// as long as the first value isn't null
    	deleteQueue(); // get rid of all values inside of the queue
	if(otherQueue.front == nullptr) // if the first in the queue is null
	{
		queueFront = nullptr;// assign the front a null value
		queueRear = nullptr;// assign the rear a null value
	}
	else //otherwise
	{
		current = otherQueue.front; // the pointer ID called "current" is assigned the value at the front of the queue
		
		//count = otherQueue.count;
		queueFront = new nodeType<Type>; // dynamically allocate memory for a nodeType Type, type
		
		queueFront->info = current->info;// the info at the front of the queue is not assigned the value at current
		queueFront->link = nullptr; // front links to a null value
		
		queueRear = queueFront; // the rear is assigned the value of the front
		while(current != nullptr) // while the most recent value is not null
		{
			newNode = new nodeType<Type>; // dynamically allocate memory for a nodeType Type, type
			newNode->info = current->info; // the node we just allocated memory one line above is being assigned the value at current
			newNode->link = nullptr; // the next value we link to is going to be null
			
			queueRear->link = newNode; // the rear links to the value newNode holds (the value before null)
			queueRear = newNode; // the rear is assigned the value of newNode (the value before null)
			
			current = current->link; // current then links to the next value
		}
	} 
}//end copy constructor

#endif