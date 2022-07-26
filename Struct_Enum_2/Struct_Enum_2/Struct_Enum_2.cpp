#include <iostream>
#include <locale.h>

struct bank_account {
    unsigned int number;
    std::string name;
    double balance;
};

void funcPointer(bank_account *p) {

    std::cout << "¬ведите новый баланс: ";
    std::cin >> p->balance;
    std::cout << "¬аш счЄт: " << p->name << ", " << p->number << ", " << p->balance << std::endl;
}

void funcLink(bank_account &p) {

    std::cout << "¬ведите новый баланс: ";
    std::cin >> p.balance;
    std::cout << "¬аш счЄт: " << p.name << ", " << p.number << ", " << p.balance << std::endl;
}

int main()
{
    setlocale(LC_ALL, "Russian");
    system("chcp 1251");

    bank_account b;
    std::cout << "¬ведите номер счЄта: ";
    std::cin >> b.number;
    std::cout << "¬ведите им€ владельца: ";
    std::cin >> b.name;
    std::cout << "¬ведите баланс: ";
    std::cin >> b.balance;

    std::cout << "„ерез указатель" << std::endl;
    funcPointer(&b);
    std::cout << "„ерез ссылку" << std::endl;
    funcLink(b);

    return 0;
}
