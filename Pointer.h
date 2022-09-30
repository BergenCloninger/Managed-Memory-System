#pragma once

template<class T>
class Pointer {
private:
	T* address;
public:
	Pointer(T*) ;
	~Pointer();

	T& operator*();
	T* operator->();
};
