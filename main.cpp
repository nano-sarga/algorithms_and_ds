#include <iostream>
#include "sort.h"
#include <array>

int main() {
    int size;
    std::cout << "Input count of array elements:\n";
    std::cin >> size;
    if (size <= 0) {
        std::cout << "Size must be > 0\n";
        return 0;
    }

    auto* arr = new int[size];
    std::cout << "Input array elements:\n";
    for (int i = 0; i < size; i++) {
        std::cin >> arr[i];
    }
    bubble_sort(arr, size);

    std::cout << "Array after bubble sorting:\n";
    for (int i = 0; i < size; i++) {
        std::cout << arr[i] << ' ';
    }

    delete[] arr;
    return 0;
}