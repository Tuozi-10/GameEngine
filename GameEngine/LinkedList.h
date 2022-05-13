#pragma once

#ifndef DEFLinkedList
#define DEFLinkedList

#include<stdio.h>
#include<stdlib.h>
#include<vector>
#include <iostream>

using namespace std;
namespace Utilities
{
	template<class type>
	struct Node {
		type data;
		struct Node<type>* next;
		struct Node<type>* previous;
	};

	template<class type>
	class LinkedList
	{
	public:
		Node<type>* head;
		Node<type>* last;
		LinkedList();

		void Add(type data);
		void RemoveLast();
	};
}

#include "LinkedList.cpp"
#endif