#include "LinkedList.h"

// https://www.prepbytes.com/blog/linked-list/generic-linked-list-in-c/#:~:text=Generic%20linked%20lists%20are%20implementations,the%20second%20one%20stores%20float.

class LinkedList
{
public:
	void AddNode(void *data)
	{
		struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));
	}

	Node* firstNode;
	Node** allNodes;
};

