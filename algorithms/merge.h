#ifndef MERGE_H
#define MERGE_H

#include <vector>

template<typename T>
void merge(std::vector<T>& v, int l, int m, int r) {
    std::vector<T> temp;
    int i = l, j = m + 1;

    while (i <= m && j <= r)
        temp.push_back(v[i] <= v[j] ? v[i++] : v[j++]);

    while (i <= m) temp.push_back(v[i++]);
    while (j <= r) temp.push_back(v[j++]);

    for (int k = 0; k < temp.size(); ++k)
        v[l + k] = temp[k];
}

template<typename T>
void merge_sort_impl(std::vector<T>& v, int l, int r) {
    if (l >= r) return;
    int m = (l + r) / 2;
    merge_sort_impl(v, l, m);
    merge_sort_impl(v, m + 1, r);
    merge(v, l, m, r);
}

template<typename T>
void merge_wrapper(std::vector<T>& v) {
    if (!v.empty())
        merge_sort_impl(v, 0, v.size() - 1);
}

#endif
