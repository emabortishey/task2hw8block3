#include "Array.h"

Array Fun();
 
int main()
{
    setlocale(LC_ALL, "Russian");
    
    Array test{ Fun() };
    /*stri test1;
    stri test2;
 
    char* str = new char[80];
 
    cout << "������� ������ ��� ������ � �����: ";
 
    gets_s(str, 80);
 
    test.set_string(str);
 
 
    cout << "\n������ ���������� � ������� ���������: " << test.get_string();
 
    cout << "\n\n���������� ��������� ���������: " << test.counter_link();*/

    cout << "\n������ � ������� ��������� � ������� �������� ������� ������ � ������������ �����������: ";
    test.print_array();

    return 0;
}

Array Fun()
{
    int buff_mass[10]{ 1,2,3,4,5,6,7,8,9,10 };
    Array obj{ 10, buff_mass };

    cout << "\n������ ������� ���������� ��� ������������ ������������: ";
    obj.print_array();

    return obj;
}