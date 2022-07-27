
#include <iostream>

enum class Month {
    January = 1,
    February,
    March,
    April,
    May,
    June,
    July,
    August,
    September,
    October,
    November,
    December
};

int main()
{
    setlocale(LC_ALL, "Russian");
    Month month = static_cast<Month>(1);
    int m = 1;

    while (m != 0) {
        std::cout << "Введите номер месяца: ";
        std::cin >> m;
        switch (m)
        {
        case 1 : std::cout << "Январь" << std::endl;
            break;
        case 2: std::cout << "Февраль" << std::endl;
            break;
        case 3: std::cout << "Март" << std::endl;
            break;
        case 4: std::cout << "Апрель" << std::endl;
            break;
        case 5: std::cout << "Май" << std::endl;
            break;
        case 6: std::cout << "Июнь" << std::endl;
            break;
        case 7: std::cout << "Июль" << std::endl;
            break;
        case 8: std::cout << "Август" << std::endl;
            break;
        case 9: std::cout << "Сентябрь" << std::endl;
            break;
        case 10: std::cout << "Октябрь" << std::endl;
            break;
        case 11: std::cout << "Ноябрь" << std::endl;
            break;
        case 12: std::cout << "Декабрь" << std::endl;
            break;
        default: 
            if (m > 0) {
                std::cout << "Неправильный номер!" << std::endl;
            }
            else std::cout << "До свидания" << std::endl;
            break;
        }
    }
    
    return 0;
}

