#include "sorts.hpp"
#include <utility>

void bubbleSort(std::vector<int>& numbers)
{
    for (std::size_t end = numbers.size(); end > 1; --end) {
        bool swapped = false;
        for (std::size_t i = 1; i < end; ++i) {
            if (numbers[i - 1] > numbers[i]) {
                std::swap(numbers[i - 1], numbers[i]);
                swapped = true;
            }
        }
        if (!swapped) break;
    }
}
