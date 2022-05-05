#include "stos.h"
#include<iostream>
#define SIZE 5

template <class T> 
Stack<T>::Stack() { top = -1; }
template <class T> 
void Stack<T>::push(T k)
{

    if (isFull()) {
        std::cout << "stos pelny\n";
    }

    std::cout << "dodany element " << k << std::endl;

    top = top + 1;

    st[top] = k;
}


template <class T> bool Stack<T>::isEmpty()
{
    if (top == -1)
        return 1;
    else
        return 0;
}

template <class T> bool Stack<T>::isFull()
{
  
    if (top == (SIZE - 1))
        return 1;
    else

        return 0;
}


template <class T> T Stack<T>::pop()
{
    T popped_element = st[top];

    top--;

    return popped_element;
}


template <class T> T Stack<T>::topElement()
{

    T top_element = st[top];

    return top_element;
}