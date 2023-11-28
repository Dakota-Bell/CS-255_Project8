#include <iostream>
#include <fstream>
using namespace std;
#include "linkedListStack.h"

void menu(); // just displays the user options

void createStack(linkedListType<string>&, linkedQueueType<string>&);
string deleteStack(linkedListType<string>&);
string printStack(linkedListType<string>&);
void updateStack();
void loadBookFile(string);
void addBookToStack();
void printStackTitles();
void printStackTop();
void removeBook();


int main()
{
	int choice = 0;
	linkedListType<string> myBookStack;
	linkedQueueType<linkedStack<Book*> > myBookQueue;
	linkedStack<Book*> bS;
	// IN THE HOOD IM LIKE PRINCESS DIANA
	
	
	while(choice != 10)
	{
		menu();
		cin >> choice;
		switch(choice)
		{
			case 1:
				createStack(myBookStack, myBookQueue);
				break;
			case 2:
				//deleteStack(myBookStack);
				break;
			case 3:
				//printStack();
				break;
			case 4:
				//updateStack();
				break;
			case 5:
//				loadBookFile(fN);
				break;
			case 6:
				//addBookToStack();
				break;
			case 7:
				//printStackTitles();
				break;
			case 8:
				//printStackTop();
				break;
			case 9:
				//removeBook();
				break;
				//cout << "blah blah blah" << endl;
		}
	}
	
	return 0;
}

void menu()
{
	cout << "1. Create a Stack" << endl;
	cout << "2. Delete a Stack" << endl;
	cout << "3. Print Stack Names" << endl;
	cout << "4. Update Active Stack" << endl;
	cout << "5. Load Books From File" << endl;
	cout << "6. Add Book to Stack" << endl;
	cout << "7. Print Stack Titles" << endl;
	cout << "8. Print Stack Top" << endl;
	cout << "9. Remove Book" << endl;
	cout << "10. Quit" << endl;
}

void createStack(linkedListType<string>& name, linkedQueueType<string>& queue)
{
	string stackName;
	cout << "Enter the name of your stack: " << endl;
	cin >> stackName;
	name.insert(stackName); // adds to the bottom of the stack
	//queue = name;
}

//void deleteStack(linkedListType<string>& temp)
//{
//	temp.deleteQueue();
//}

//string printStack(linkedListType<string>& bookStack)
//{
//	queueLinkedList<string>* temp; // hold value of first mem. address to bookStack to not lose it in mem.
//	temp = bookStack;
//	for(int i = 0; i < count; i++)
//	{
//		bookStack.top();
//		bookStack->link = bookStack;
//	}
//	bookstack = temp;
//}

//void updateStack()
//{
//	
//}
//
//void loadBookFile(string fN)
//{
//	
//}
//
void addBookToStack()
{
	
}

void printStackTitles()
{
	// need a temp to have as a sentinel for a loop
	linkedListType<string>* temp;
	
	while(temp != nullptr)
	{
		// name of bookstack.top
		temp->top(); // display the title of the book
		temp->pop(); // pop the temp book off the top so the next book's title can be shown
	}
}

void printStackTop()
{
	// simply print whatever is the book title is on top for the current book stack
	linkedListType<Book*> myBookStack;
	linkedListType<Book*> temp;
	
	temp = myBookStack; // make a copy of the bookStack 
	
	temp->top();
	
	
	
	// then do bookTitle.pop
}

void removeBook(linkedListType<string> myBookStack)
{
	linkedQueueType<linkedListType<string>> *temp;
	temp = myBookStack; // make a copy of the list
	myBookStack->link; // link to the next stack of books
	delete *temp; // delete the temperary variable
}
