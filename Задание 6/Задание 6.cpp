﻿// Задание 6.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <string>
using namespace std;
int main()
{
    system("chcp 1251 >> null");
    setlocale(LC_ALL, "rus");
    int k = 0; //объявляем переменную
    cout << "Введите текст в строку: " << endl;
    string s; //объявляем строку
    getline(cin, s);
    cout << "Введите любой символ: " << endl;
    string s0; //объявляем 2 строку
    getline(cin, s0);
    while (s.find(s0) != s.npos) 
    {
        k++;
        s.erase(s.find(s), s.length());
    }
    if (k > 0) //если количество встреченных символов больше 0, то выводим их количество
    {
        cout << "Количество вашего введенного символа в строке = " << k << endl;
    }
    else //иначе выводим, что их было 0
    {
        cout << "Количество вашего введенного символа в строке = 0" << endl;
    }
    system("pause");
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
