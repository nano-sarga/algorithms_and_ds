#include "registry.h"
#include "bucket.h"
#include <string>

static bool reg4 = []{
    AlgoRegistry<int>::instance().add("Bucked Sort", bucket<int>);
    AlgoRegistry<double>::instance().add("Bucked Sort", bucket<double>);
    AlgoRegistry<char>::instance().add("Bucked Sort", bucket<char>);
    return true;
}();
