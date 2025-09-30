/*
Задание 2: Анализатор текстовых данных
Цель: Практика работы со строками, возвратом значений и организацией кода в функции.

Задача:
Создайте программу для анализа текста с использованием различных функций для обработки строк.
*/

#include <iostream>
#include <string>
#include <vector>
#include <cctype>
#include <algorithm>
using namespace std;

// TODO: Реализуйте следующие функции:

// 1. Функция для подсчета общего количества символов
int countTotalChars(const string &text)
{
    // Ваш код здесь
}

// 2. Функция для подсчета количества слов
int countWords(const string &text)
{
    // Ваш код здесь
}

// 3. Функция для подсчета количества предложений
int countSentences(const string &text)
{
    // Ваш код здесь
}

// 4. Функция для поиска самого длинного слова
string findLongestWord(const string &text)
{
    // Ваш код здесь
}

// 5. Функция для поиска самого частого слова
string findMostFrequentWord(const string &text)
{
    // Ваш код здесь
}

// 6. Функция для проверки, является ли текст палиндромом (игнорируя пробелы и регистр)
bool isTextPalindrome(const string &text)
{
    // Ваш код здесь
}

// 7. Функция для расчета читабельности по индексу Флеша
double calculateFleschScore(const string &text)
{
    // Формула: 206.835 - 1.015 * (общее_слов / предложения) - 84.6 * (слоги / слова)
    // Ваш код здесь (упрощенная версия)
}

// 8. Функция для получения статистики текста
void printTextStats(const string &text)
{
    // Ваш код здесь - используйте все вышеперечисленные функции
}

// 9. Функция для разбиения текста на слова (возвращает вектор слов)
vector<string> splitIntoWords(const string &text)
{
    // Ваш код здесь
}

// 10. Функция для поиска всех вхождений слова в тексте
vector<int> findAllOccurrences(const string &text, const string &word)
{
    // Ваш код здесь - возвращает позиции, где встречается слово
}

int main()
{
    string testText = "Первое предложение. Второе предложение содержит больше слов! "
                      "Третье предложение? Четвертое и последнее предложение. "
                      "Уровень читабельности текста можно оценить различными методами. "
                      "Предложение предложение тест тест тест.";

    cout << "=== Анализ текста ===" << endl;
    cout << "Текст: " << testText << endl
         << endl;

    printTextStats(testText);

    cout << "\n=== Дополнительный анализ ===" << endl;

    // Поиск конкретного слова
    string searchWord = "предложение";
    vector<int> positions = findAllOccurrences(testText, searchWord);
    cout << "Слово '" << searchWord << "' встречается " << positions.size()
         << " раз(а) на позициях: ";
    for (int pos : positions)
    {
        cout << pos << " ";
    }
    cout << endl;

    // Проверка на палиндром
    string palindromeTest = "А роза упала на лапу Азора";
    cout << "\nПроверка палиндрома: '" << palindromeTest << "' - "
         << (isTextPalindrome(palindromeTest) ? "палиндром" : "не палиндром") << endl;

    // Разбиение на слова
    vector<string> words = splitIntoWords(testText);
    cout << "\nВсе слова текста (" << words.size() << "):" << endl;
    for (size_t i = 0; i < words.size(); i++)
    {
        cout << (i + 1) << ". '" << words[i] << "'" << endl;
    }

    return 0;
}