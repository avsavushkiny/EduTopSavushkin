// МЕГАМОДУЛИ C++23
import std;        // Вся стандартная библиотека
import std.compat; // Совместимость с C

// Пример (если компилятор поддерживает)
import std;

int main()
{
    std::vector<int> numbers = {5, 2, 8, 1, 9};
    std::ranges::sort(numbers);

    for (int n : numbers)
    {
        std::println("{}", n); // C++23 std::println
    }
    return 0;
}