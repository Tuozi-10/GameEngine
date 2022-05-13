#pragma once
#include "UnitTests.h"
#include "Macros.h"

#ifdef UNIT_TESTS

/// <summary>
/// Unit tests are designed to be compiled only when the Macro UNIT_TESTS is defined, to keep the code base as clean as possible in release
/// </summary>
namespace UnitTests
{

	/// <summary>
	/// this method calls every unit tests of the game, checks if they are okey, stops at first failure
	/// </summary>
	/// <returns></returns>
	bool RunUnitTests()
	{
		bool UnitTestsOk = true;

		cout << "Starting Unit Tests ... ";

		if (!UnitTestLinkedList())
		{
			return false;
		}

		cout << "\nUnit Tests Success: ALL !\n\n\n";

		return true;
	}
}

#endif // UNIT_TESTS