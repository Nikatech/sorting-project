#include "sorts.hpp"
#include <utility>

void selectionSort(std::vector<int>& numbers)
{
    for (std::size_t i = 0; i < numbers.size(); ++i) {
        std::size_t smallest = i;
        for (std::size_t j = i + 1; j < numbers.size(); ++j) {
            if (numbers[j] < numbers[smallest]) smallest = j;
        }
        std::swap(numbers[i], numbers[smallest]);
    }
}
