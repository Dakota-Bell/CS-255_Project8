#include <iostream>
#include <string>
using namespace std;

/*
***************************************************************************
NODE STRUCT FOR LINKED LIST STACK
***************************************************************************
*/
template<class Type>
struct nodeType
{
	nodeType* link;
	string info;	
};

/*
***************************************************************************
BOOK DECLARATIONS DEFINITIONS
***************************************************************************
*/
template<class Type>
class Book
{
	private:
		string title;
		string author;
		string isbNum;
		int count;
	public:	
		Book(); // constructor
		void setTitle(string t);
		void setAuthro(string a);
		void setISBNum(string num);
		string getTitle();
		string getAuthor();
		string getISBNum();
		//friend ostream& operator<<(ostream&, Book&);
};

/*
***************************************************************************
BOOK CLASS DEFINITIONS
***************************************************************************
*/
template<class Type>
Book<Type>::Book() // constructor 
{
	title  = " ";
	author = " ";
	isbNum = " ";
	count = 0;
}

template<class Type>
void Book<Type>::setTitle(string t)
{
	title = t;
}

template<class Type>
void Book<Type>::setAuthro(string a)
{
	author = a;
}

template<class Type>
void Book<Type>::Book::setISBNum(string num)
{
	isbNum = num;
}

template<class Type>
string Book<Type>::getTitle()
{
	return title;	
}

template<class Type>
string Book<Type>::getAuthor()
{
	return author;
}

template<class Type>
string Book<Type>::getISBNum()
{
	return isbNum;
}

/*
template<class Type>
ostream& operator<<(ostream& os, Type& rhs)
{
	os << "Title: " << rhs.getTitle() << "\n" 
	<< "Author: " << rhs.getName() << "\n" 
	<< "ISBN: " << rhs.getISBNum() << "\n";
	return os; // displays all of the above to the screen
}*/