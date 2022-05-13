#pragma once

#include<stdio.h>
#include<stdlib.h>

struct Node {
	void* data;
	struct Node* next;
	struct Node* previous;
};

