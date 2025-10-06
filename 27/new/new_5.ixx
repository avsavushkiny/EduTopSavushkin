// geometry.ixx
export module geometry;

// Импорт зависимостей
import <string>;
import <cmath>;

// Экспорт пространства имен
export namespace Geometry {
    
    // Экспорт структуры
    export struct Point {
        double x, y;
    };
    
    // Экспорт функций
    export double calculateDistance(Point a, Point b) {
        double dx = b.x - a.x;
        double dy = b.y - a.y;
        return std::sqrt(dx*dx + dy*dy);
    }
    
    export double calculateCircleArea(double radius) {
        return 3.14159 * radius * radius;
    }
}

// Внутренние реализации (не экспортируются)
namespace detail {
    double helperFunction() {
        return 0.0;
    }
}