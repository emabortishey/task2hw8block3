#include "stri.h"

void stri::set_string(char* stringg_P)
{
	delete[] stringg;
	length = strlen(stringg_P) + 1;
	stringg = new char[length];
	strcpy_s(stringg, length, stringg_P);
}