#ifndef INPUT_H
#define INPUT_H
#include <iostream>
#include <vector>
#include <limits>

 int input_size() {
     int size;
     while (true) {
         std::cout << "Input count of vector elements:\n";
         std::cin >> size;
         if (std::cin && size > 0) { return size; }
         std::cin.clear();
         std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
         std::cout << "Invalid size!\nTry again\n";
     }
     return size;
 }

template <typename T>
void input_vector(std::vector<T>& vec) {
    std::cout << "Input vector elements:\n";
    for (auto x : vec) {
        std::cin >> x;
    }
}

template <typename T>
void display_vector(const std::vector<T>& vec) {
    for (auto x : vec) {
        std::cout << x << ' ';
    }
}

#endif //INPUT_H