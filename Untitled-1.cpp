#include <iostream>
#include <cmath>
/***
 * Практична робота №1
 * Тема: Структура програми C++
 * Завдання: Варіант 2 - Різниця двох чисел
 */
int main() {
    // Оголошення змінних для чисел і обрахунку результату
    double a, b;
    double result;

    // Запит даних у користувача
    std::cout << "--- Programa dlya obchyslennya riznytsi dvokh chysel ---" << std::endl;
    std::cout << "Vvedit pershe chyslo (a): ";
    std::cin >> a;
    
    std::cout << "Vvedit druge chyslo (b): ";
    std::cin >> b;

    // Обчислення різниці за формулою a - b
    result = a - b;

    // Виведення результату
    std::cout << "Rezultat vidnimannya (a - b): " << result << std::endl;

    return 0;
}