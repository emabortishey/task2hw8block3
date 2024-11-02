#include "Array.h"

void Array::set_array(int* array_P)
{
	delete[] array;
	length = sizeof(array_P);
	array = new int[length];
	for (int i = 0; i < length; i++)
	{
		array[i] = array_P[i];
	}
}

void Array::print_array() const
{
	for (int i = 0; i < length; i++)
	{
		cout << array[i] << ' ';
	}
}