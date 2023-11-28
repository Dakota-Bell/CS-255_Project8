// Pointers and instances are separate things
#include <iostream>
#include <string>

using namespace std;

class Book
{
    private:
        string author;
        string isbn;
        string title;
    public:

        Book()
        {
            cin.ignore();
            cout << "enter the book title." << endl;
            getline(cin, title);
            cout << "Enter the author" << endl;
            getline(cin, author);
            cout << "Enter the ISBN" << endl;
            getline(cin, isbn);
        }
        Book(string t, string a, string i)
        {

            title = t;
            author = a;
            isbn = i;
        }
        string getTitle()
        {
            return title;
        }
        string getAuthor()
        {
            return author;
        }
        string getISBN()
        {
            return isbn;
        }

        friend ostream& operator<<(ostream& os, Book& rhs)
        {
            os << "Title: " << rhs.getTitle() << "\n";
	        os << "Author: " << rhs.getAuthor() << "\n";
	        os << "ISBN: " << rhs.getISBN() << "\n";
	        return os; // displays all of the above to the screen
        }

};
