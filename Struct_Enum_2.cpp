/*
Создайте структуру для хранения информации о банковском счёте.

Она должна хранить номер счёта (целое число), имя владельца (строка) и количество денег на счету (дробное число)

Создайте функцию для изменения баланса счёта - функция должна принимать экземпляр структуры
банковского счёта и новую сумму

Попросите пользователя заполнить поля экземпляра структуры, попросите его сообщить новый баланс
счёта и выведите обновлённый экземпляр структуры на консоль

*/

#include <iostream>
#include <locale.h>

struct bank_account
{
    unsigned int number;
    std::string name;
    double balance;
};

void funcPointer(double Balance, bank_account *p)
{
    p->balance = Balance;
    std::cout << "Ваш счёт: " << p->name << ", " << p->number << ", " << p->balance << std::endl;
}

int main()
{
    setlocale(LC_ALL, "Russian");

    bank_account b;
    std::cout << "Введите номер счёта: ";
    std::cin >> b.number;
    std::cout << "Введите имя владельца: ";
    std::cin >> b.name;
    std::cout << "Введите баланс: ";
    std::cin >> b.balance;

    std::cout << "Введите номер счета: ";
    std::cin >> b.number;
    std::cout << "Введите новый баланс: ";
    double new_balance;
    std::cin >> new_balance;
    funcPointer(new_balance, &b);

    return 0;
}
