#ifndef FILE_OPERATIONS_H
#define FILE_OPERATIONS_H

#include <string>

class FileOperations
{
public:
    // Сохранить текст в файл
    static bool saveToFile(const std::string &text, const std::string &filename);

    // Прочитать и вывести содержимое файла
    static void displayFileContent(const std::string &filename);

    // Проверить, существует ли файл
    static bool fileExists(const std::string &filename);
};

#endif