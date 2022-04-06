#include <iostream>
#include <LearnCMakeConf.h>
#ifdef USE_MYMATHLIB
    #include "MathLib.h"
#endif

int main(int argc, char * argv[]) {
    std::cout << argv[0] << " Version: " << LearnCMake_VERSION_MAJOR << "." << LearnCMake_VERSION_MINOR << '\n';

    std::cout << "hello" << std::endl;
#ifdef USE_MYMATHLIB
    std::cout << "Use MyMath Lib " << add(1, 2) << std::endl;
#else
    std::cout << 1+2 << std::endl;
#endif
    return 0;
}
