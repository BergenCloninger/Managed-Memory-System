#include "Managment.h"
#include <iostream>
#include "Global.h"

//int* pointer = reinterpret_cast<int*>(malloc(4)); //new (rewrite malloc)

int check = 0;

int lookForSpace(int size, int count){
	for(int i = size; i > 0; i--){
		
		if(global::buffer[count] == 0){
			check += 1;
		} else {
			check = 0;
		}
		if(check == size){
			check = 0;
			return count;
		}
		count += 1;
	}
	return lookForSpace(size, count);
}

void* mallocbutswag(int sizeOfAllocation){
	lookForSpace(sizeOfAllocation, 0);
}
