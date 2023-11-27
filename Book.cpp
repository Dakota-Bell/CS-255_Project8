#include "Book.h"

Book::Book() // constructor 
{
	title  = " ";
	author = " ";
	isbNum = " ";
}

Book::~Book()
{
	
}

void Book::setTitle(string t)
{
	title = t;
}

void Book::setAuthro(string a)
{
	author = a;
}

void Book::setISBNum(string num)
{
	isbNum = num;
}

Type Book::getTitle()
{
	return title;	
}

Type Book::getAuthor()
{
	return author;
}

Type Book::getISBNum()
{
	return isbNum;
}