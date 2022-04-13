#include <iostream>
#include <string>

int main() {
    std::string secondNames[10];
    std::cout << "Введите 10 фамилий:\n";
    for (int i = 0; i < 10; i++) {
        std::cin >> secondNames[i];
    }

    for (int i = 0; i < 3; i++) {
        int number;
        std::cout << "Введите номер квартиры: ";
        std::cin >> number;
        if (number > 10 || number < 1) {
            std::cout << "Неправильный номер квартиры!\n";
        } else {
            std::cout << "→ " << secondNames[number-1] << std::endl;
        }
    }
}
