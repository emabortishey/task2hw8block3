#include "Array.h"

Array Fun();
 
int main()
{
    setlocale(LC_ALL, "Russian");
    
    Array test{ Fun() };
    /*stri test1;
    stri test2;
 
    char* str = new char[80];
 
    cout << "Введите строку для записи в класс: ";
 
    gets_s(str, 80);
 
    test.set_string(str);
 
 
    cout << "\nСтрока полученная с помощью аксессора: " << test.get_string();
 
    cout << "\n\nКоличество созданных элементов: " << test.counter_link();*/

    cout << "\nСтрока в обьекте созданным с помощью неявного обьекта класса и конструктора перемещения: ";
    test.print_array();

    return 0;
}

Array Fun()
{
    int buff_mass[10]{ 1,2,3,4,5,6,7,8,9,10 };
    Array obj{ 10, buff_mass };

    cout << "\nСтрока обьекта созданного для тестирования конструктора: ";
    obj.print_array();

    return obj;
}