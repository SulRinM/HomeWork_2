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
    December = 12
};

int main()
{
    setlocale(LC_ALL, "Russian");
    int m = 1;
      
    while (m != 0) {
        std::cout << "Введите номер месяца: ";
        std::cin >> m;
        if (m == 0) {
           std::cout << "До свидания" << std::endl;
           break;
        }
        if (m > 12 || m < 0) {
            std::cout << "Неправильный номер!" << std::endl;
        }

        if(m > 0 && m < 13)
        {
            Month month = static_cast<Month>(m);

        switch (month)
        {
        case Month::January:  std::cout << "Январь" << std::endl;
            break;
        case Month::February: std::cout << "Февраль" << std::endl;
            break;
        case Month::March: std::cout << "Март" << std::endl;
            break;
        case Month::April: std::cout << "Апрель" << std::endl;
            break;
        case Month::May: std::cout << "Май" << std::endl;
            break;
        case Month::June: std::cout << "Июнь" << std::endl;
            break;
        case Month::July: std::cout << "Июль" << std::endl;
            break;
        case Month::August: std::cout << "Август" << std::endl;
            break;
        case Month::September: std::cout << "Сентябрь" << std::endl;
            break;
        case Month::October: std::cout << "Октябрь" << std::endl;
            break;
        case Month::November: std::cout << "Ноябрь" << std::endl;
            break;
        case Month::December: std::cout << "Декабрь" << std::endl;
            break;
        }
        }
        
    }
    
    return 0;
}
