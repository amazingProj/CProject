#include "LinkedList.h"
#include "ReverseOrder.h"
#define maximumSize 15

void ReverseOrder()
{
	int data = 0;
	List* list = CreateList();
	int alive = 1;
	char* iterator;
	char num[maximumSize];
	while (alive)
	{
		printf("%s", "Enter a number, or a string to exit\n");
		fgets(num, maximumSize, stdin);
		iterator = num;
		int i = 0;
		while (iterator[i] != NULL && iterator[i] != '\n')
		{
			data *= 10;
			if (iterator[i] >= '0' && iterator[i] <= '9')
			{
				data += ((int)(iterator[i]) - '0');
			}
			else
			{
				alive = 0;
			}
			++i;
		}
		if (alive)
		{
			PushFront(list, data);
		}
		data = 0;
	}
	printf("%10s\n", "The values");
	PNode iter = list->root;
	while (iter != NULL)
	{
		printf("%d\n", iter->value);
		iter = iter->next;
	}

}