#include "registry.h"
#include "quick.h"
#include <string>

static bool reg4 = []{
    AlgoRegistry<int>::instance().add("Quick Sort", quick<int>);
    AlgoRegistry<double>::instance().add("Quick Sort", quick<double>);
    AlgoRegistry<char>::instance().add("Quick Sort", quick<char>);
    AlgoRegistry<std::string>::instance().add("Quick Sort", quick<std::string>);
    return true;
}();
