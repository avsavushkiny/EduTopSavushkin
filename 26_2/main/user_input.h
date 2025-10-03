#ifndef USER_INPUT_H
#define USER_INPUT_H

#include <string>

class UserInput {
public:
    // Получить текст от пользователя
    static std::string getTextFromUser();
    
    // Проверить валидность текста
    static bool isValidText(const std::string& text);
};

#endif