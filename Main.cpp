#include "Pointer.h"
#include "Managment.h"
#include "Global.h"
#include <iostream>

int main() {
	global::buffer = new unsigned char[65536];
	Pointer<int> testPointer = reinterpret_cast<int*>(mallocbutswag(4));
	*testPointer = 3;
	std::cout << *testPointer;
	return 0;
}