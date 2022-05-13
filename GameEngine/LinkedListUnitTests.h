#pragma once
#include "Macros.h"

#ifdef UNIT_TESTS

#ifndef DEFLinkedListsUnitTests
#define DEFLinkedListsUnitTests

#include<stdio.h>
#include<stdlib.h>
#include<vector>
#include "LinkedList.h"
#include <iostream>

namespace UnitTests
{
	using namespace std;
	bool UnitTestLinkedList();
}
#endif // DEFLinkedListsUnitTests

#endif // UNIT_TESTS

