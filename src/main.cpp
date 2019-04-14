#include <iostream>
#include <limits>
#include "seniorproject.hpp"

using namespace seniorproject;

// static data member initializations
std::string seniorproject::_program_name    = "seniorproject";
unsigned    seniorproject::_major_version   = 1;
unsigned    seniorproject::_minor_version   = 0;
const double Node::_smallest_edge_length  = 1.0e-12;
const double Updater::_log_minus_infinity = std::numeric_limits<double>::lowest();

int main(int argc, const char * argv[])
    {
    seniorproject seniorproject;
    try {
        seniorproject.processCommandLineOptions(argc, argv);
        seniorproject.run();
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
