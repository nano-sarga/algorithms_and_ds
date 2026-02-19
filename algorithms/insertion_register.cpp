#include "registry.h"
#include "insertion.h"
#include <string>

static bool reg2 = []{
    AlgoRegistry<int>::instance().add("Insertion Sort", insertion<int>);
    AlgoRegistry<double>::instance().add("Insertion Sort", insertion<double>);
    AlgoRegistry<char>::instance().add("Insertion Sort", insertion<char>);
    AlgoRegistry<std::string>::instance().add("Insertion Sort", insertion<std::string>);
    return true;
}();
