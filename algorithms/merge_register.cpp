#include "registry.h"
#include "merge.h"
#include <string>

static bool reg4 = []{
    AlgoRegistry<int>::instance().add("Merge Sort", merge_wrapper<int>);
    AlgoRegistry<double>::instance().add("Merge Sort", merge_wrapper<double>);
    AlgoRegistry<char>::instance().add("Merge Sort", merge_wrapper<char>);
    AlgoRegistry<std::string>::instance().add("Merge Sort", merge_wrapper<std::string>);
    return true;
}();
