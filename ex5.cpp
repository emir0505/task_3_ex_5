#include "ex5.h"
#include <iostream>

void insertCommaBeforeExclamation(char* text) {
    // Определение длины строки
    int length = 0;
    while (text[length] != '\0') {
        ++length;
    }

    // Определение количества восклицательных знаков для расчета новой длины
    int exclamationCount = 0;
    for (int i = 0; i < length; ++i) {
        if (text[i] == '!') {
            ++exclamationCount;
        }
    }

    // Новая длина строки
    int newLength = length + exclamationCount;

    // Обратный проход по строке для вставки запятых
    for (int i = length - 1, j = newLength - 1; i >= 0; --i, --j) {
        text[j] = text[i];
        if (text[i] == '!') {
            --j;
            text[j] = ',';
        }
    }

    // Завершение строки
    text[newLength] = '\0';
}
