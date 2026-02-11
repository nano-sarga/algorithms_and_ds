#ifndef ALGORITHMS_AND_DS_SORT_H
#define ALGORITHMS_AND_DS_SORT_H

template <typename T>
void swap(T& a, T& b) {
    T temp = a;
    a = b;
    b = temp;
}

template <typename T>
void bubble_sort(T arr[], int size) {
    bool swapped = false;
    do {
        swapped = false;
        for (int j = 0; j + 1 < size; j++) {
            if (arr[j] > arr[j+1]) {
                swap(arr[j], arr[j+1]);
                swapped = true;
            }
        }
        size--;
    } while (swapped);
}
#endif ALGORITHMS_AND_DS_SORT_H