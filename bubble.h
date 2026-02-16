#ifndef ALGORITHMS_AND_DS_BUBBLE_H
#define ALGORITHMS_AND_DS_BUBBLE_H
#include <vector>
#include "register.h"

template <typename T>
void my_swap(T& a, T& b) {
    T temp = a;
    a = b;
    b = temp;
}

template <typename T>
void bubble(std::vector<T>& vec) {
    bool swapped = false;
    do {
        swapped = false;
        for (int j = 0; j + 1 < vec.size(); j++) {
            if (vec[j] > vec[j+1]) {
                my_swap(vec[j], vec[j+1]);
                swapped = true;
            }
        }
        if (!swapped) break;
    } while (swapped);
}

static AutoRegisterAll<int, double, char, std::string> reg_bubble("Bubble", bubble<int>);

#endif //ALGORITHMS_AND_DS_BUBBLE_H