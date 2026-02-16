#ifndef REGISTER_H
#define REGISTER_H
#include "registry.h"

template <typename T, typename... N>
struct AutoRegisterAll {
    AutoRegisterAll(const std::string& name, void (*func)(std::vector<T>&)) {
        AlgoRegistry<T>::instance().add(name, func);
        if constexpr (sizeof...(N) > 0) {
            AutoRegisterAll<N...> (name, func);
        }
    }
};

template <typename T>
struct AutoRegisterAll<T> {
    AutoRegisterAll(const std::string& name, void (*func)(std::vector<T>&)) {
        AlgoRegistry<T>::instance().add(name, func);
    }
};

#endif //REGISTER_H