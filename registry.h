#ifndef REGISTRY_H
#define REGISTRY_H
#include <vector>
#include <map>
#include <string>

template <typename T>
using AlgoFunc = void (*)(std::vector<T>&);

template <typename T>
class AlgoRegistry {
private:
    std::map<std::string, AlgoFunc<T>> algorithms;
public:
    static AlgoRegistry& instance() {
        static AlgoRegistry reg;
        return reg;
    }

    void add(std::string names, AlgoFunc<T> func) {
        algorithms[names] = func;
    }

    const std::map<std::string, AlgoFunc<T>>& get() const {
        return algorithms;
    }
};

#endif //REGISTRY_H