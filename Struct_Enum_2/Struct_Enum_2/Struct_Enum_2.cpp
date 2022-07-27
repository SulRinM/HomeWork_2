#include <iostream>
#include <locale.h>

struct bank_account {
    unsigned int number;
    std::string name;
    double balance;
};

void funcPointer(bank_account) {
    std::cout << "Введите номер счета: ";
    std::cin >> p->number;
    std::cout << "Введите новый баланс: ";
    std::cin >> p->balance;
    std::cout << "Ваш счёт: " << p->name << ", " << p->number << ", " << p->balance << std::endl;
}

void funcLink(bank_account &p) {
    std::cout << "Введите номер счета: ";
    std::cin >> p.number;
    std::cout << "Введите новый баланс: ";
    std::cin >> p.balance;
    std::cout << "Ваш счёт: " << p.name << ", " << p.number << ", " << p.balance << std::endl;
}

int main()
{
    setlocale(LC_ALL, "Russian");
    system("chcp 1251");

    bank_account b;
    std::cout << "Введите номер счёта: ";
    std::cin >> b.number;
    std::cout << "Введите имя владельца: ";
    std::cin >> b.name;
    std::cout << "Введите баланс: ";
    std::cin >> b.balance;

    std::cout << "Через указатель" << std::endl;
    funcPointer(&b);
    std::cout << "Через ссылку" << std::endl;
    funcLink(b);

    return 0;
}
