#include "mylib.h"
#include <iostream>
#include <stdio.h>
#include <random>
#include <iostream>
using namespace std;
namespace myLib
{
	
	void countingArray(float* NAME_ARR, int size, int& PlusNumbers, int& MinusNumbers)
	{

		for (int index = 0; index < size; index++)
			if (NAME_ARR[index] > 0)
				++PlusNumbers;
			else if (NAME_ARR[index] < 0)
				++MinusNumbers;

	};

	void printArr(float* NAME_ARR, int size)
	{
		for (size_t i = 0; i <size; i++)
		{
			std::cout << NAME_ARR[i] << " ";
		}
		std::cout << std::endl;

		return;
	};
	
	void arr(float* NAME_ARR, int size)
	{
		srand(time(NULL));
		if (size > 0)
		{

			NAME_ARR = new float[size];
			for (size_t i = 0; i < size; i++)
			{
				NAME_ARR[i] = rand() % 10;
			}

		}
		else
		{
			std::cout << "Error! Can not allocate memory!";
		}
		
	};
}