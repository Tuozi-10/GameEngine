#include "LinkedListUnitTests.h"
#include "Macros.h"

#ifdef UNIT_TESTS

using namespace Utilities;
namespace UnitTests
{
	bool UnitTestLinkedList()
	{
		cout << "\nStarting Unit Tests Linked Lists\n";
		LinkedList<int> list;
		list.Add(12);
		list.Add(13);
		list.Add(14);
		list.Add(15);
		cout << list.head->data;
		cout << list.last->data;
		cout << list.last->previous->data ;
		list.RemoveLast();
		cout << list.head->data;
		cout << list.last->data;
		cout << list.last->previous->data;

		bool success = list.last->previous->data == 13;
		cout << "\nUnit Tests Linked Lists: " << ((success == true) ?"SUCCESS !" : "FAILURE... Aborting tests...\n\n");
	
		return success;
	}
}

#endif // UNIT_TESTS