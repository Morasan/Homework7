#include <iostream>
#include "mylib.h"

	int main(int argc, char* argv[])
	{
		float* arr2;
		const int size = 5;
		int PlusNumbers;
		int MinusNumbers;
		myLib::arr(arr2, size); 
		myLib::printArr( arr2, size);
		myLib::countingArray( arr2, size, PlusNumbers, MinusNumbers);
		
		// Вызываем функция из другого модуля
		return 0;
	}
