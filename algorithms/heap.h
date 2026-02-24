#ifndef ALGORITHMS_AND_DS_HEAP_H
#define ALGORITHMS_AND_DS_HEAP_H
#include <vector>

template <typename T>
void my_swap(T& a, T& b) {
    T temp = a;
    a = b;
    b = temp;
}

template <typename T>
void heapify(std::vector<T>& vec, int n, int i) {
    int largest = i;
    int left = 2 * i + 1;
    int right = 2 * i + 2;

    if (left < n && vec[left] > vec[largest])
        largest = left;
    if (right < n && vec[right] > vec[largest])
        largest = right;
    if (largest != i) {
        my_swap(vec[i], vec[largest]);
        heapify(vec, n, largest);
    }
}

template <typename T>
void heap(std::vector<T>& vec) {
    int n = vec.size();
    for (int i = n / 2 - 1; i >= 0; i--)
        heapify(vec, n, i);
    for (int i = n - 1; i >= 0; i--) {
        my_swap(vec[0], vec[i]);
        heapify(vec, i, 0);
    }
}
#endif //ALGORITHMS_AND_DS_HEAP_H