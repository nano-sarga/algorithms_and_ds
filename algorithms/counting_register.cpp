#include "registry.h"
#include "counting.h"
#include <string>

static bool reg4 = []{
    AlgoRegistry<int>::instance().add("Counting Sort", counting<int>);
    AlgoRegistry<double>::instance().add("Counting Sort", counting<double>);
    AlgoRegistry<char>::instance().add("Counting Sort", counting<char>);
    return true;
}();
