#include "modules/FindPerson.h"
#include "src/netCurl.h"
#include "lib/includes.h"
#include "lib/termcolor.hpp"

using namespace termcolor;

void FindPerson::mainMenu(std::string name)
{
    for (int i = 0; i < 5; i++) {
        long code = ResponseCode(services[i] + name);
    if (code == 404) {
        std::cout << bold << red << "  [-] " << reset << services[i] << bold << blue << " | " << red << "N/A" <<  std::endl;
    }
    else {
        std::cout << bold << green << "  [+] " << reset << services[i] << bold << blue << " | " << green<< "Success!" <<  std::endl;
    }
    }
}