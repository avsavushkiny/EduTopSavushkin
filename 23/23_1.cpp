/*
Задание 1: Система управления банковским счетом
Цель: Закрепить навыки работы с функциями, передачей параметров по ссылке и структурой программы.

Задача:
Разработайте программу для управления банковским счетом с использованием функций.
Программа должна предоставлять следующие операции:
*/

/*
Требования:
- Используйте передачу по ссылке для модификации счетов
- Используйте константные ссылки где это уместно
- Реализуйте проверку ошибок (недостаточно средств и т.д.)
- Форматируйте вывод денежных сумм
*/

#include <iostream>
#include <iomanip>
using namespace std;

struct BankAccount
{
    string ownerName;
    int accountNumber;
    double balance;
    double interestRate; // годовая процентная ставка
};

// TODO: Реализуйте следующие функции:

// 1. Функция для создания нового счета
BankAccount createAccount(string name, int accNumber, double initialBalance, double rate)
{
    // Ваш код здесь
}

// 2. Функция для пополнения счета (передача по ссылке)
void depositMoney(BankAccount &account, double amount)
{
    // Ваш код здесь
}

// 3. Функция для снятия денег (с проверкой достаточности средств)
bool withdrawMoney(BankAccount &account, double amount)
{
    // Ваш код здесь
}

// 4. Функция для начисления процентов
void applyInterest(BankAccount &account)
{
    // Ваш код здесь
}

// 5. Функция для перевода денег между счетами
bool transferMoney(BankAccount &from, BankAccount &to, double amount)
{
    // Ваш код здесь
}

// 6. Функция для вывода информации о счете
void printAccountInfo(const BankAccount &account)
{
    // Ваш код здесь
}

// 7. Функция для сравнения двух счетов (по балансу)
string compareAccounts(const BankAccount &acc1, const BankAccount &acc2)
{
    // Ваш код здесь
}

int main()
{
    // Демонстрация работы всех функций

    // Создаем два счета
    BankAccount account1 = createAccount("Иван Иванов", 1001, 5000.0, 5.0);
    BankAccount account2 = createAccount("Мария Петрова", 1002, 3000.0, 4.5);

    cout << "=== Инициализация счетов ===" << endl;
    printAccountInfo(account1);
    printAccountInfo(account2);

    // Тестируем операции
    cout << "\n=== Операции со счетами ===" << endl;

    depositMoney(account1, 1500.0);
    cout << "После пополнения счета 1 на 1500 руб.:" << endl;
    printAccountInfo(account1);

    bool success = withdrawMoney(account1, 2000.0);
    cout << "Снятие 2000 руб. со счета 1: " << (success ? "успешно" : "неудачно") << endl;
    printAccountInfo(account1);

    success = withdrawMoney(account2, 4000.0);
    cout << "Попытка снять 4000 руб. со счета 2: " << (success ? "успешно" : "неудачно") << endl;

    cout << "\n=== Перевод между счетами ===" << endl;
    success = transferMoney(account1, account2, 1000.0);
    cout << "Перевод 1000 руб. со счета 1 на счет 2: " << (success ? "успешно" : "неудачно") << endl;
    printAccountInfo(account1);
    printAccountInfo(account2);

    cout << "\n=== Начисление процентов ===" << endl;
    applyInterest(account1);
    applyInterest(account2);
    cout << "После начисления процентов:" << endl;
    printAccountInfo(account1);
    printAccountInfo(account2);

    cout << "\n=== Сравнение счетов ===" << endl;
    cout << "Результат сравнения: " << compareAccounts(account1, account2) << endl;

    return 0;
}