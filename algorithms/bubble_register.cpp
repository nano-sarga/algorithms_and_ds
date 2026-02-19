#include "bubble.h"
#include "registry.h"
#include <string>

static bool reg1 = []{
    AlgoRegistry<int>::instance().add("Bubble", bubble<int>);
    AlgoRegistry<double>::instance().add("Bubble", bubble<double>);
    AlgoRegistry<char>::instance().add("Bubble", bubble<char>);
    AlgoRegistry<std::string>::instance().add("Bubble", bubble<std::string>);
    return true;
}();
