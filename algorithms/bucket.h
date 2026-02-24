#ifndef ALGORITHMS_AND_DS_BUCKET_H
#define ALGORITHMS_AND_DS_BUCKET_H
#include <vector>
#include <algorithm>

template <typename T>
void bucket(std::vector<T>& vec) {
    if (vec.empty()) return;

    T minVal = *std::min_element(vec.begin(), vec.end());
    T maxVal = *std::max_element(vec.begin(), vec.end());
    T range = maxVal - minVal;

    int n = vec.size();
    std::vector<std::vector<T>> buckets(n);

    for (T x : vec) {
        int index = n * (x - minVal) / (range + 1);
        buckets[index].push_back(x);
    }

    for (auto &bucket : buckets)
        std::sort(bucket.begin(), bucket.end());

    int idx = 0;
    for (auto &bucket : buckets) {
        for (T x : bucket)
            vec[idx++] = x;
    }
}

#endif //ALGORITHMS_AND_DS_BUCKET_H