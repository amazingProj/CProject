#include "Tests.h"

/**
  * @file Tests.h
  * tests linked list, query and stack
  * @see LinkedList.h
  * @see Query.h
  * @see Stack.h
  */

void PrintTestResult(size_t x, int code)
{
	if (code == 1)
	{
		printf("%13d %10s\n", x, "Succeded");
	}
	else
	{
		printf("%13d %10s\n", x, "Failed");
	}

}

void TestStackCreation()
{
	Stack* stack = CreateStack();

	PNode node = (PNode)(malloc(sizeof(Node)));
	int x = 190;
	node->value = x;
	StackPush(stack, node);

	x = 1908;
	node->value = x;
	StackPush(stack, node);

	x = 19023;
	node->value = x;
	StackPush(stack, node);

	x = 12;
	node->value = x;
	StackPush(stack, node);

	x = 121;
	node->value = x;
	StackPush(stack, node);

	x = 8;
	node->value = x;
	StackPush(stack, node);

	/*********Prints stack*********/
	StackPrint(stack);

	printf("Please check if the output is the reverse order of \n190,1908,19203,12,121,8 %s","\n");
	
	DeleteStack(stack);
}

void TestQueryCreation()
{
	Query* query = CreateQuery();

	PNode node = (PNode)(malloc(sizeof(Node)));
	int x = 190;
	node->value = x;
	QueryPush(query, node);

	x = 1908;
	node->value = x;
	QueryPush(query, node);

	x = 19023;
	node->value = x;
	QueryPush(query, node);

	x = 12;
	node->value = x;
	QueryPush(query, node);

	x = 121;
	node->value = x;
	QueryPush(query, node);

	x = 8;
	node->value = x;
	QueryPush(query, node);

	QueryPrint(query);

	printf("%13s %10s \n", "Test number", "Result");

	PrintTestResult(1, 1);

	DeleteQuery(query);

	PrintTestResult(2, 1);

}

void AssertInsert(int x, int y)
{
	if (x == y)
	{
		printf("%s", "insert succeded\n");
	}
}

void TestLinkedList()
{
	printf("%11s %10s \n", "Test number", "Result");

	List* list = CreateList();
	int x = 4;

	Insert(list, x, 0);

	Insert(list, x, 1);
	Insert(list, x, 1);
	Insert(list, x, 1);

	Insert(list, x, 1);
	Insert(list, x, 1);
	Insert(list, x, 1);
	Insert(list, x, 1);

	if (GetListSize(list) == 8)
	{
		PrintTestResult(1, 1);
	}
	else
	{
		PrintTestResult(1, 0);
	}

	x = 100;
	PushFront(list, x);
	PNode node = PopFront(list);
	if (x == node->value)
	{
		PrintTestResult(2, 1);
	}
	else
	{
		PrintTestResult(2, 0);
	}

	x = 3090;
	PushBack(list, x);
	node = PopBack(list);
	if (x == node->value)
	{
		PrintTestResult(3, 1);
	}
	else
	{
		PrintTestResult(3, 0);
	}

	PushBack(list, 90288);
	PushBack(list, x);
	PopBack(list);
	node = PopBack(list);
	if (90288 == node->value)
	{
		PrintTestResult(4, 1);
	}
	else
	{
		PrintTestResult(4, 0);
	}

	Insert(list, 90288, 5);
	node = Find(list, 90288);
	if (node != NULL && node->value == 90288)
	{
		PrintTestResult(5, 1);
	}
	else
	{
		PrintTestResult(5, 0);
	}

	Insert(list, 3090, 3);
	node = Find(list, 3090);
	if (node != NULL && node->value == 3090)
	{
		PrintTestResult(6, 1);
	}
	else
	{
		PrintTestResult(6, 0);
	}
}

void RunUnitTests()
{
	TestStackCreation();
	TestLinkedList();
	TestQueryCreation();
	printf("\n");
}
