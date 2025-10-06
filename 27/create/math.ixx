// Объявление модуля
export module math;

// Экспорт функций
export double add(double a, double b)
{
    return a + b;
}

export double multiply(double a, double b)
{
    return a * b;
}

// Внутренняя функция (не экспортируется)
double internal_helper()
{
    return 42.0;
}