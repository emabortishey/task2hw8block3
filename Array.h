#pragma once
#include <iostream> 
#include <conio.h>
#include <stdio.h>
#include <cstdio>

using namespace std;

class Array
{

private:
	static int counter;
	int length;
	int* array;

public:
	Array() : Array(10, nullptr) {}
	Array(int length_P) : Array(length_P, nullptr) {}
	Array(int length_P, const int* array_P) : length{ length_P }, array{ new int[length_P] }
	{
		for (int i = 0; i < length; i++)
		{
			array[i] = array_P[i];
		}
		counter_link()++;
	}
	Array(const Array& obj) : length{ obj.length }, array{ new int[obj.length] }
	{
		for (int i = 0; i < length; i++)
		{
			array[i] = obj.array[i];
		}
		counter_link()++;
	}

	Array(Array&& obj) : length{ obj.length }, array{ obj.array }
	{
		obj.array = nullptr;
		obj.length = 0;
		counter_link()++;
	}

	void set_array(int* array_P);

	const int* get_array() { return array; }

	void print_array() const;

	static int& counter_link() {
		static int counter = 0;
		return counter; }

	~Array()
	{
		counter_link()--;
		delete[] array;
	}
};
