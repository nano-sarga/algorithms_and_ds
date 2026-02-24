#include "bubble.h"
#include "registry.h"
#include <string>

static bool reg1 = []{
    AlgoRegistry<int>::instance().add("Bubble Sort", bubble<int>);
    AlgoRegistry<double>::instance().add("Bubble Sort", bubble<double>);
    AlgoRegistry<char>::instance().add("Bubble Sort", bubble<char>);
    AlgoRegistry<std::string>::instance().add("Bubble Sort", bubble<std::string>);
    return true;
}();
