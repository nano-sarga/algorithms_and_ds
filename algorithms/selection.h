#ifndef ALGORITHMS_AND_DS_SELECTION_H
#define ALGORITHMS_AND_DS_SELECTION_H
#include <vector>

template <typename T>
void my_swap(T& a, T& b) {
    T temp = a;
    a = b;
    b = temp;
}

template <typename T>
void selection(std::vector<T>& vec) {
    int size = vec.size();
    for (int i = 0; i < size - 1; i++) {
        int minIndex = i;

        for (int j = i + 1; j < size; j++) {
            if (vec[j] < vec[minIndex]) {
                minIndex = j;
            }
        }
        if (minIndex != i) {
            my_swap(vec[i], vec[minIndex]);
        }
    }
}

#endif //ALGORITHMS_AND_DS_SELECTION_H