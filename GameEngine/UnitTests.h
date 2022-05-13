#pragma once
#include "Macros.h"

#ifdef UNIT_TESTS

#ifndef DEFUnitTests
#define DEFUnitTests

#include<stdio.h>
#include<stdlib.h>
#include<vector>
#include "LinkedList.h"
#include <iostream>
#include "LinkedListUnitTests.h"

using namespace UnitTests;

namespace UnitTests
{
	using namespace std;
	bool RunUnitTests();
}

#endif

#endif // UNIT_TESTS