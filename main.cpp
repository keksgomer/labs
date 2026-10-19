#include <iostream>
// Функция вычисления квадрата числа
auto square(int x) -> int {
    return x * x;
}
int main() {
    // Униформ-инициализация
    auto number{7};
    // Вызов функции
    auto result = square(number);
    std::cout << "Number: " << number << std::endl;
    std::cout << "Square: " << result << std::endl;
    return 0;
}