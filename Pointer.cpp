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