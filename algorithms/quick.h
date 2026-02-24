#ifndef ALGORITHMS_AND_DS_QUICK_H
#define ALGORITHMS_AND_DS_QUICK_H
#include <vector>

template <typename T>
void my_swap(T& a, T& b) {
    T temp = a;
    a = b;
    b = temp;
}

template <typename T>
int partition(std::vector<T>& vec, int low, int high) {
    T pivot = vec[high];
    int i = low - 1;
    for (int j = low; j < high; j++) {
        if (vec[j] < pivot) {
            i++;
            my_swap(vec[i], vec[j]);
        }
    }
    my_swap(vec[i + 1], vec[high]);
    return i + 1;
}

template <typename T>
void quick_sort(std::vector<T>& vec, int low, int high) {
    if (low < high) {
        int pi = partition(vec, low, high);
        quick_sort(vec, low, pi - 1);
        quick_sort(vec, pi + 1, high);
    }
}

template <typename T>
void quick(std::vector<T>& vec) {
    if (!vec.empty())
        quick_sort(vec, 0, vec.size() - 1);
}
#endif //ALGORITHMS_AND_DS_QUICK_H