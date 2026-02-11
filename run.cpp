#include "run.h"
#include "sort.h"
#include <iostream>
#include <limits>

int input_size() {
    int size;
    while (true) {
        std::cout << "Input count of array elements:\n";
        std::cin >> size;
        if (std::cin && size > 0) { break; }
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        std::cout << "Invalid size!\nTry again\n";
    }
    return size;
}

void run_bubble() {
    int size = input_size();
    auto* arr = new int[size];
    initialise_array(arr, size);

    bubble_sort(arr, size);

    std::cout << "Array after bubble sorting:\n";
    display_array(arr, size);
    delete[] arr;
}