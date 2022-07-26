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
    std::cout << "Страна: " << addr.country << std::endl;
    std::cout << "Город: " << addr.city << std::endl;
    std::cout << "Улица: " << addr.street << std::endl;
    std::cout << "Номер дома: " << addr.house_number << std::endl;
    std::cout << "Номер квартиры: " << addr.apartment_number << std::endl;
    std::cout << "Индекс: " << addr.index << std::endl;
    std::cout << std::endl;
}

int main()
{
    setlocale(LC_ALL, "Russian");
    system("chcp 1251");

    Addres addres;
    addres.country = "Россия";
    addres.city = "Санкт-Петербург";
    addres.street = "Николая Рубцова";
    addres.house_number = 8;
    addres.apartment_number = 15;
    addres.index = 192000;

    Addres _addres;
    _addres.country = "Россия";
    _addres.city = "Челябинск";
    _addres.street = "Героев Танкограда";
    _addres.house_number = 20;
    _addres.apartment_number = 40;
    _addres.index = 194000;

    func(addres);
    func(_addres);

    return 0;
}

