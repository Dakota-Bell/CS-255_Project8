#include <iostream>
#include <fstream>
using namespace std;
#include "linkedListStack.h"

void menu(); // just displays the user options

void createStack(linkedListType<string>&, linkedQueueType<string>&);
string deleteStack(linkedListType<string>&);
string printStack(linkedListType<string>&);
//void updateStack();
//void loadBookFile(string);
//void addBookToStack();
//string printStackTitles();
//string printStackTop();
//void removeBook();


int main()
{
	int choice = 0;
	linkedListType<string> myBookStack;
	linkedQueueType<string> myBookQueue;
	
	
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
	queue = name;
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
//void addBookToStack()
//{
//
//}
//
//string printStackTitles()
//{
//	
//}
//
//string printStackTop()
//{
//	// 
//}
//
//void removeBook()
//{
////	queueLinkedList<Type> *temp;
////	temp = queueFront;
////	queueFront = queueFront->link;
////	delete temp;
//}