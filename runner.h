#ifndef RUNNER_H
#define RUNNER_H
#include <vector>
#include <iostream>
#include "input.h"

template <typename T>
void run_sort(void (*func)(std::vector<T>&)) {
    int size = input_size();
    std::vector<T> vec(size);
    initialise_vector(vec);
    func(vec);

    std::cout << "Vector after applying the algorithm:\n";
    display_vector(vec);
}

#endif //RUNNER_H