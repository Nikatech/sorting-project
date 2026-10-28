#include "sorts.hpp"

void insertionSort(std::vector<int>& numbers)
{
    for (std::size_t i = 1; i < numbers.size(); ++i) {
        const int value = numbers[i];
        std::size_t j = i;
        while (j > 0 && numbers[j - 1] > value) {
            numbers[j] = numbers[j - 1];
            --j;
        }
        numbers[j] = value;
    }
}
