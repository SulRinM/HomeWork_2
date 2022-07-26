#include <iostream>
#include <locale.h>

struct bank_account {
    unsigned int number;
    std::string name;
    double balance;
};

void funcPointer(bank_account *p) {

    std::cout << "������� ����� ������: ";
    std::cin >> p->balance;
    std::cout << "��� ����: " << p->name << ", " << p->number << ", " << p->balance << std::endl;
}

void funcLink(bank_account &p) {

    std::cout << "������� ����� ������: ";
    std::cin >> p.balance;
    std::cout << "��� ����: " << p.name << ", " << p.number << ", " << p.balance << std::endl;
}

int main()
{
    setlocale(LC_ALL, "Russian");
    system("chcp 1251");

    bank_account b;
    std::cout << "������� ����� �����: ";
    std::cin >> b.number;
    std::cout << "������� ��� ���������: ";
    std::cin >> b.name;
    std::cout << "������� ������: ";
    std::cin >> b.balance;

    std::cout << "����� ���������" << std::endl;
    funcPointer(&b);
    std::cout << "����� ������" << std::endl;
    funcLink(b);

    return 0;
}
