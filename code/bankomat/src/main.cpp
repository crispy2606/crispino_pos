#include <iostream>
#include "sml.hpp"
#include "bankomat.h"

//namespace sml = boost::sml;
using namespace boost::sml;
using namespace std;

int main(){
    cout << "bankomat" << endl;
    bankomat::start();
    return EXIT_SUCCESS;
}