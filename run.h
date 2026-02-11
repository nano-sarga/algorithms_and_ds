#ifndef ALGORITHMS_AND_DS_RUN_H
#define ALGORITHMS_AND_DS_RUN_H
#include <iostream>

int input_size();

template <typename T>
void initialise_array(T arr, int size) {
    std::cout << "Input array elements:\n";
    for (int i = 0; i < size; i++) {
        std::cin >> arr[i];
    }
}

template <typename T>
void display_array(T arr, int size) {
    for (int i = 0; i < size; i++) {
        std::cout << arr[i] << ' ';
    }
}

void run_bubble();

#endif //ALGORITHMS_AND_DS_RUN_H