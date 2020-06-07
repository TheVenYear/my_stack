#include "Stack.h"
#include "StackItem.h"

template<class T>
T Stack<T>::Get() {
	return curItem->data;
}

template<class T>
void Stack<T>::Delete() {
	StackItem<T> *temp;
	temp = curItem->prevPtr;
	delete curItem;
	curItem = temp;
	length--;
}

template<class T>
void Stack<T>::Add(T item) {
	StackItem<T> *newItem = new StackItem<T>();
	newItem->data = item;
	newItem->prevPtr = curItem;
	curItem = newItem;
	length++;
}

template<class T>
int Stack<T>::Length() {
	return length;
}
