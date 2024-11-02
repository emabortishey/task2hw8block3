#pragma once
#include <iostream> 
#include <conio.h>
#include <stdio.h>
#include <cstdio>

using namespace std;

class stri
{

private:
	static int counter;
	int length;
	char* stringg;

public:
	stri() : stri(80, nullptr) {}
	stri(int length_P) : stri(length_P, nullptr) {}
	stri(int length_P, const char* stringg_P) : length{ length_P }, stringg{ new char[length_P] }
	{
		if (stringg_P)
		{
			strcpy_s(stringg, length, stringg_P);
		}
		else
		{
			strcpy_s(stringg, length, "none");
		}
		counter_link()++; 
	}
	stri(const stri& obj) : length{ obj.length }, stringg{ new char[obj.length] { *obj.stringg } }
	{
		stringg = new char[length] { *obj.stringg };
		counter_link()++;
	}

	stri(stri&& obj) : length{ obj.length }, stringg{obj.stringg}
	{
		obj.stringg = nullptr;
		obj.length = 0;
		counter_link()++;
	}

	void set_string(char* stringg_P);

	const char* get_string() { return stringg; }

	void print_string() const { puts(stringg); }

	static int& counter_link() {
		static int counter = 0;
		return counter; }

	~stri()
	{
		counter_link()--;
		delete[] stringg;
	}
};
