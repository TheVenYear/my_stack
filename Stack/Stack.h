#pragma once
#include "StackItem.h"

template<class T>
class Stack
{
public:
	int Length();
	void Add(T item);
	T Get();
	void Delete();
private:
	StackItem<T>* curItem;
	int length = 0;
};

#include "Stack.cpp"

