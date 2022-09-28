#include "Pointer.h"

template<class T>
Pointer<T>::Pointer(T* inputPointer) {
	address = inputPointer;
}

template<class T>
T& Pointer<T>::operator*() {
	return *address;
}

template<class T>
T* Pointer<T>::operator->() {
	return address;
}

template<class T>
Pointer<T>::~Pointer() {
	
}

class Test {
public:
	int test;
};

void test() {
	int x = 5;
	Pointer<int> test = &x;
	Test test3 = {5};
	Pointer<Test> test2 = &test3;
	test2 -> test = 10;
}