#include <iostream>
#include <time.h>
#include "Stack/Stack.h"

int main()
{
	setlocale(LC_ALL, "Russian");
	Stack<int> stack1, stack2, stack3;
	for (int i = 0; i < 100; i++)
	{
		stack1.Add(i + 1);
	}

	for (int i = 0; i < 10000; i++)
	{
		stack2.Add(i + 1);
	}

	for (int i = 0; i < 1000000; i++)
	{
		stack3.Add(i + 1);
	}

	clock_t start = clock();
	stack1.Add(228);
	clock_t end = clock();
	printf("%f - время, затраченное на добавление эл-та в стек размером 100\n", (double)(end - start) / CLOCKS_PER_SEC);

	start = clock();
	stack2.Add(228);
	end = clock();
	printf("%f - время, затраченное на добавление эл-та в стек размером 10000\n", (double)(end - start) / CLOCKS_PER_SEC);

	start = clock();
	stack3.Add(228);
	end = clock();
	printf("%f - время, затраченное на добавление эл-та в стек размером 1000000\n", (double)(end - start) / CLOCKS_PER_SEC);

	system("pause");
	return 0;
}
