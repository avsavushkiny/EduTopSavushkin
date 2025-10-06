export module math_operations;

export namespace Math
{
    double add(double a, double b)
    {
        return a + b;
    }

    double subtract(double a, double b)
    {
        return a - b;
    }

    double multiply(double a, double b)
    {
        return a * b;
    }

    double divide(double a, double b)
    {
        if (b == 0.0)
        {
            return 0.0; // Упрощенная обработка ошибок
        }
        return a / b;
    }

    constexpr double PI = 3.141592653589793;
}