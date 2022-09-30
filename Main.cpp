#include "Pointer.h"
#include "Managment.h"
#include "Global.h"
#include <iostream>

int size;

int main() {
	global::buffer = new unsigned char[65536];
	int* pointer = reinterpret_cast<int*>(mallocbutswag(4));
	*pointer = 3;
	std::cout << *pointer;
	return 0;
}