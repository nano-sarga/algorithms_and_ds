#include "registry.h"
#include "heap.h"
#include <string>

static bool reg4 = []{
    AlgoRegistry<int>::instance().add("Heap Sort", heap<int>);
    AlgoRegistry<double>::instance().add("Heap Sort", heap<double>);
    AlgoRegistry<char>::instance().add("Heap Sort", heap<char>);
    AlgoRegistry<std::string>::instance().add("Heap Sort", heap<std::string>);
    return true;
}();
