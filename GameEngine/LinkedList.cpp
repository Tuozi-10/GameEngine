#pragma once

#ifndef DEFLinkedListCPP
#define DEFLinkedListCPP

#include "LinkedList.h"

#define null NULL

namespace Utilities
{
	template<class type>
	LinkedList<type>::LinkedList()
	{
		head = NULL;
		last = NULL;
	}

	template<class type>
	void LinkedList<type>::Add(type data)
	{
		// if No element we start our list
		if (!head)
		{
			head = new Node<type>;
			head->data = data;
			head->next = NULL;
			head->previous = NULL;
			last = head;
		}
		else
		{
			// if only one element
			if (last == head)
			{
				last = new Node<type>;
				last->data = data;
				last->next = NULL;
				head->next = last;
				last->previous = head;
			}
			//when more than 1 element
			else
			{
				Node<type>* newNode = new Node<type>;
				newNode->data = data;
				newNode->next = NULL;
				last->next = newNode;
				newNode->previous = last;
				last = newNode;
			}
		}
	}

	template<class type>
	void LinkedList<type>::RemoveLast()
	{
		if (head == null && last == NULL)
			return;

		if (head != null && last == null)
		{
			delete head;
			return;
		}

		if (last != null)
		{
			last = last->previous;
			delete last->next;
			last->next = NULL;
		}
	}
}

#endif