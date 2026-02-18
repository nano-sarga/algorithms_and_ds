#ifndef MENU_H
#define MENU_H
#include "registry.h"
#include "runner.h"
#include <vector>
#include <iostream>
#include <string>

template <typename T>
void algorithm_menu () {
    auto& reg = AlgoRegistry<T>::instance();
    std::vector<std::string> names;

    int i = 1;
    std::cout << "Select algorithm:\n";
    for (auto& x : reg.get()) {
        std::cout << i++ << ' ' << x.first << '\n';
        names.push_back(x.first);
    }

    int choice;
    std::cin >> choice;
    if (choice < 1 || choice > static_cast<int>(names.size())) {
        std::cout << "Invalid choice!\n";
        return;
    }

    auto it = reg.get().find(names[choice - 1]);
    run_sort<T>(it->second);
}

    inline void type_menu() {
        int choice;
        std::cout << "Select type: 1 = int, 2 = double,\n\t3 = char, 4 = std::string" << std::endl;
        std::cin >> choice;

        switch (choice) {
            case 1: algorithm_menu<int>(); break;
            case 2: algorithm_menu<double>(); break;
            case 3: algorithm_menu<char>(); break;
            case 4: algorithm_menu<std::string>(); break;
            default: std::cout << "Invalid type\n";
        }
    }

#endif //MENU_H