#ifndef ALGORITHMS_AND_DS_INSERTION_H
#define ALGORITHMS_AND_DS_INSERTION_H
#include <vector>

template <typename T>
void insertion(std::vector<T>& vec) {
    int size = vec.size();
    for (int i = 1; i < size; i++) {
        T key = vec[i];
        int j = i - 1;

        while (j >= 0 && vec[j] > key) {
            vec[j + 1] = vec[j];
            j--;
        }
        vec[j + 1] = key;
    }
}
#endif //ALGORITHMS_AND_DS_INSERTION_H