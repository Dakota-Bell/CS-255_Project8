#include "node.h"
#include "Book.h"

template <class t>
class stack
{
    public:
        ~stack();
        stack();
        stack(const stack<t>& otherStack);
        const stack<t>& operator=(const stack<t>&);
        bool isEmptyStack() const;
        void initializeStack();
        void push(const t& item);
        t top() const;
        void pop();
        
    private:
        node<t> *stackTop;
        void copyStack(const stack<t>& otherStack);
};

template <class t>
stack<t>::stack()
{
    stackTop = nullptr;
}
template <class t>
stack<t>::~stack()
{
    initializeStack();
}
template <class t>
bool stack<t>::isEmptyStack() const
{
    return(stackTop == nullptr);
}

template <class t>
void stack<t>::initializeStack()
{
    node<t> * temp;
    
    while(stackTop != nullptr)
    {
        temp = stackTop;
        stackTop = stackTop->link;
        delete temp;
    }
}

template <class t>
void stack<t>::push(const t& item)
{
    node<t> *newNode;
    newNode = new node<t>;
    
    newNode->info = item;
    newNode->link = stackTop;
    stackTop = newNode;
}

template <class t>
t stack<t>::top() const
{
    assert(stackTop != nullptr);

    return stackTop->info;
}

template <class t>
void stack<t>::pop()
{
    node<t> *temp;

    if(stackTop!= nullptr)
    {
        temp = stackTop;
        stackTop = stackTop->link;
        delete temp;
    }
    else
        cout << "Cannot remove from an empty stack." << endl;
}
