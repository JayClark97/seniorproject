#include <iostream>
#include <limits>
#include "treeHelper.hpp"

using namespace phylocuda;

// static data member initializations
std::string THelper::_program_name    = "t";
unsigned    THelper::_major_version   = 1;
unsigned    THelper::_minor_version   = 0;
const double Node::_smallest_edge_length  = 1.0e-12;
const double Updater::_log_minus_infinity = std::numeric_limits<double>::lowest();

int main(int argc, const char * argv[])
    {
    THelper t;
    try {
        t.processCommandLineOptions(argc, argv);
        t.run();
    }
    catch(std::exception & x) {
        std::cerr << "Exception: " << x.what() << std::endl;
        std::cerr << "Aborted." << std::endl;
    }
    catch(...) {
        std::cerr << "Exception of unknown type!\n";
    }

    return 0;
    }
