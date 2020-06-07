#pragma once

template<class T>
struct StackItem
{
	T data;
	StackItem<T>* prevPtr = nullptr;
};

