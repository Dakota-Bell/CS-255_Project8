#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    int count, i=0;
    ifstream file;
    string name, title, author, isbn;
    file.open("history.txt");

    if(file.is_open())
    {
        i = name.find("\n");
        getline(file, name);
        title = name;
        name.erase(0,i);

        getline(file, name);
        author = name;
        name.erase(0,i);

        getline(file, name);
        isbn = name;
        name.erase(0, i);

    }

    cout << "Title: " << title << endl;
    cout << "Author: " << author << endl;
    cout <<"ISBN: " << isbn << endl;
    return 0;
}
