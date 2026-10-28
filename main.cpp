#include "sorts.hpp"
#include <iostream>
#include <sstream>
#include <string>
#include <vector>

int main()
{
    std::cout << "Введите целые числа через пробел и нажмите Enter:\n";
    std::string line;
    if (!std::getline(std::cin, line)) return 1;

    std::istringstream input(line);
    std::vector<int> numbers;
    int value;
    while (true) {
        input >> std::ws;
        if (input.eof()) break;
        if (!(input >> value)) {
            std::cerr << "Ошибка: нужны целые числа в диапазоне int.\n";
            return 1;
        }
        numbers.push_back(value);
    }
    if (numbers.empty()) {
        std::cerr << "Ошибка: введи хотя бы одно число.\n";
        return 1;
    }

    std::cout << "Выбери сортировку: 1 — пузырьком, 2 — выбором, 3 — вставками:\n";
    if (!std::getline(std::cin, line)) return 1;
    std::istringstream choiceInput(line);
    int choice;
    std::string extra;
    if (!(choiceInput >> choice) || (choiceInput >> extra)) {
        std::cerr << "Ошибка: введи номер 1, 2 или 3.\n";
        return 1;
    }
    switch (choice) {
        case 1: bubbleSort(numbers); break;
        case 2: selectionSort(numbers); break;
        case 3: insertionSort(numbers); break;
        default:
            std::cerr << "Ошибка: такого алгоритма нет.\n";
            return 1;
    }

    std::cout << "Результат:";
    for (int number : numbers) std::cout << ' ' << number;
    std::cout << '\n';
    return 0;
}
