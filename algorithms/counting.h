#ifndef ALGORITHMS_AND_DS_COUNTING_H
#define ALGORITHMS_AND_DS_COUNTING_H
#include <vector>
#include <algorithm>

template <typename T>
void counting(std::vector<T>& vec) {
    if (vec.empty()) return;

    T maxVal = *std::max_element(vec.begin(), vec.end());
    T minVal = *std::min_element(vec.begin(), vec.end());
    int range = maxVal - minVal + 1;

    std::vector<int> count(range, 0);

    for (T x : vec)
        count[x - minVal]++;

    int index = 0;
    for (int i = 0; i < range; i++) {
        while (count[i]-- > 0)
            vec[index++] = i + minVal;
    }
}

#endif //ALGORITHMS_AND_DS_COUNTING_H