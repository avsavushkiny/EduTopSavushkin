#include <iostream>
#include "file_operations.h"
#include "user_input.h"

int main() {
    const std::string filename = "user_data.txt";
    
    // Получение данных от пользователя
    std::string userText = UserInput::getTextFromUser();
    
    // Проверка валидности
    if (!UserInput::isValidText(userText)) {
        std::cout << "Ошибка: вы не ввели текст!" << std::endl;
        return 1;
    }
    
    // Сохранение в файл
    if (FileOperations::saveToFile(userText, filename)) {
        std::cout << "Текст успешно сохранен в файл: " << filename << std::endl;
    } else {
        std::cout << "Ошибка при сохранении файла!" << std::endl;
        return 1;
    }
    
    // Вывод содержимого файла
    FileOperations::displayFileContent(filename);
    
    return 0;
}