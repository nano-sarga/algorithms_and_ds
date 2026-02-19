#include "registry.h"
#include "selection.h"
#include <string>

static bool reg3 = []{
    AlgoRegistry<int>::instance().add("Selection Sort", selection<int>);
    AlgoRegistry<double>::instance().add("Selection Sort", selection<double>);
    AlgoRegistry<char>::instance().add("Selection Sort", selection<char>);
    AlgoRegistry<std::string>::instance().add("Selection Sort", selection<std::string>);
    return true;
}();
