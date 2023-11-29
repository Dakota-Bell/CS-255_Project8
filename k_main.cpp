#include <iostream>
#include <fstream>
#include "linkedListStack.h"
#include "queueLinked.h"
#include "linkedList.h"
#include "Book.h"

using namespace std;

int menu()
{
    int choice;
    cout << "Make a Selection: " << endl;
    cout << "\t1. Create a stack" << endl;
    cout << "\t2. Delete a stack" << endl;
    cout << "\t3. Print Stack Names" << endl;
    cout << "\t4. Update Active Stack" << endl;
    cout << "***Select for Active Stack: None Selected***" << endl;
    cout << "\t5. Load Books From File" << endl;
    cout << "\t6. Add Book to Stack" << endl;
    cout << "\t7. Print Stack Top" << endl;
    cout << "\t8. Print Stack Top" << endl;
    cout << "\t9. Remove Book " << endl;
    cout << "\t10. Quit" << endl;
    cin >> choice;

    return choice;
}

int main()
{   
    ifstream file;
    int stackSelect;
    string name;
    string activeStack = "None Selected";
    linkedListType<string> stackName;
    linkedListType<linkedStackType <Book*> > sQ;
    linkedStackType<Book*> bookStack;
    int choice = 0;
    while(choice != 10)
    {
        cout << "Active Stack: " << activeStack << endl;
        choice = menu();
        switch (choice)
        {
        case 1:
            
            break;
        case 2:
            if(_____.isEmpty())
                cout << "No Intend2Read Stacks Available." << endl;
            else
            {
                cout << "Enter a name for your stack: " << endl;
                getline(cin, name);
                stackName.insert(name); // string list of names
                activeStack = name;
                sQ.initializeList(); // separate list of book stacks.
            }
            break;
        case 3:
            if(_____.isEmpty())
                cout << "No Intend2Read Stacks Available." << endl;
            else
            {
                ____.print();
            }
            break;
        case 4:
            cout << "***Select a Stack by Number: ***" << endl;
            if(_____.isEmpty())
            {
                cout << "No Intend2Read Stacks Available" << endl;
            }
            else
            {
                ____.print();
                cout << "-1 to CANCEL." << endl;
                cin >> stackSelect;
                if(stackSelect == -1)
                {
                    cout << "Active Stack NOT Updated" << endl;
                }
            }
            break;
        case 5:
            if(______.isEmpty())
            {
                cout << "No Intend2Read Stacks Available" << endl;
            }
            else                
                ____.push(Book(file));
                
            }
            break;
        case 6:
            ______.push(Book());
            break;
        case 7:
            ____.top();
            break;
        case 8:
            break;

        case 9:
            break;
        
        default:
            break;
        }
    }
    return 0;
}
