
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
    Month month = Month::January;
    int m = 1;

    while (m != 0) {
        std::cout << "Введите номер месяца: ";
        std::cin >> m;
        switch (m)
        {
        case (static_cast<int>(Month::January)) : std::cout << "Январь" << std::endl;
            break;
        case (static_cast<int>(Month::February)): std::cout << "Февраль" << std::endl;
            break;
        case (static_cast<int>(Month::March)): std::cout << "Март" << std::endl;
            break;
        case (static_cast<int>(Month::April)): std::cout << "Апрель" << std::endl;
            break;
        case (static_cast<int>(Month::May)): std::cout << "Май" << std::endl;
            break;
        case (static_cast<int>(Month::June)): std::cout << "Июнь" << std::endl;
            break;
        case (static_cast<int>(Month::July)): std::cout << "Июль" << std::endl;
            break;
        case (static_cast<int>(Month::August)): std::cout << "Август" << std::endl;
            break;
        case (static_cast<int>(Month::September)): std::cout << "Сентябрь" << std::endl;
            break;
        case (static_cast<int>(Month::October)): std::cout << "Октябрь" << std::endl;
            break;
        case (static_cast<int>(Month::November)): std::cout << "Ноябрь" << std::endl;
            break;
        case (static_cast<int>(Month::December)): std::cout << "Декабрь" << std::endl;
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

