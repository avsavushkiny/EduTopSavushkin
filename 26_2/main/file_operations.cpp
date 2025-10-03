#include "file_operations.h"
#include <fstream>
#include <iostream>

bool FileOperations::saveToFile(const std::string &text, const std::string &filename)
{
    std::ofstream file(filename, std::ios::app); // режим добавления

    if (!file.is_open())
    {
        std::cout << "Ошибка: не удалось открыть файл!" << std::endl;
        return false;
    }

    file << text << std::endl;
    file.close();
    return true;
}

void FileOperations::displayFileContent(const std::string &filename)
{
    std::ifstream file(filename);

    if (!file.is_open())
    {
        std::cout << "Файл не существует или не может быть открыт" << std::endl;
        return;
    }

    std::cout << "\nСодержимое файла:" << std::endl;
    std::cout << "-----------------" << std::endl;

    std::string line;
    int lineNumber = 1;

    while (std::getline(file, line))
    {
        std::cout << lineNumber << ". " << line << std::endl;
        lineNumber++;
    }

    file.close();
}

bool FileOperations::fileExists(const std::string &filename)
{
    std::ifstream file(filename);
    return file.good();
}