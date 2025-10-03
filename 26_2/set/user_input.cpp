#include "user_input.h"
#include <iostream>

std::string UserInput::getTextFromUser() {
    std::string text;
    std::cout << "Введите текст для сохранения: ";
    std::getline(std::cin, text);
    return text;
}

bool UserInput::isValidText(const std::string& text) {
    return !text.empty();
}