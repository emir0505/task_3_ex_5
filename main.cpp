#include <iostream>
#include "ex5.h"

int main() {
    const int MAX_LENGTH = 1000;
    char text[MAX_LENGTH];

    std::cout << "Enter text: ";
    std::cin.getline(text, MAX_LENGTH);

    // Обработка строки для вставки запятых перед восклицательными знаками
    insertCommaBeforeExclamation(text);

    // Вывод измененного текста
    std::cout << "Modified text: " << text << std::endl;

    return 0;
}
