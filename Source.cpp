#include "stri.h"

stri Fun();
 
int main()
{
    setlocale(LC_ALL, "Russian");
    
    stri test{ Fun() };
    /*stri test1;
    stri test2;
 
    char* str = new char[80];
 
    cout << "Введите строку для записи в класс: ";
 
    gets_s(str, 80);
 
    test.set_string(str);
 
 
    cout << "\nСтрока полученная с помощью аксессора: " << test.get_string();
 
    cout << "\n\nКоличество созданных элементов: " << test.counter_link();*/

    cout << "\nСтрока в обьекте созданным с помощью неявного обьекта класса и конструктора перемещения: ";
    test.print_string();

    return 0;
}

stri Fun()
{
    stri obj{ 100, "constructor test" };

    cout << "\nСтрока обьекта созданного для тестирования конструктора: ";
    obj.print_string();

    return obj;
}