#include <iostream>
#include <locale.h>

struct Addres {
    std::string country;
    std::string city;
    std::string street;
    unsigned int house_number;
    unsigned int apartment_number;
    unsigned int index;
};

void func(Addres addr) {
    std::cout << "������: " << addr.country << std::endl;
    std::cout << "�����: " << addr.city << std::endl;
    std::cout << "�����: " << addr.street << std::endl;
    std::cout << "����� ����: " << addr.house_number << std::endl;
    std::cout << "����� ��������: " << addr.apartment_number << std::endl;
    std::cout << "������: " << addr.index << std::endl;
    std::cout << std::endl;
}

int main()
{
    setlocale(LC_ALL, "Russian");
    system("chcp 1251");

    Addres addres;
    addres.country = "������";
    addres.city = "�����-���������";
    addres.street = "������� �������";
    addres.house_number = 8;
    addres.apartment_number = 15;
    addres.index = 192000;

    Addres _addres;
    _addres.country = "������";
    _addres.city = "���������";
    _addres.street = "������ ����������";
    _addres.house_number = 20;
    _addres.apartment_number = 40;
    _addres.index = 194000;

    func(addres);
    func(_addres);

    return 0;
}

