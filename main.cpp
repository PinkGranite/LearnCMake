#include <iostream>
#include "MathLib.h"
#include <LearnCMakeConf.h>

int main(int argc, char * argv[]) {
    std::cout << argv[0] << " Version: " << LearnCMake_VERSION_MAJOR << "." << LearnCMake_VERSION_MINOR << '\n';

    std::cout << "hello" << std::endl;
    std::cout << add(1, 2) << std::endl;
    return 0;
}
