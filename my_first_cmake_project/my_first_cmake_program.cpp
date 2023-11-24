
#include <iostream>
#include <string>

int main() {
    system("chcp 1251");
    std::string name;

    std::cout << "Введите имя: ";
    std::cin >> name;

    std::cout << "Здравствуйте, " << name << "!" << std::endl;

    return 0;
}

