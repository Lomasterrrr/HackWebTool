#include "GenerateIP.h"

std::string GenerateIP::generateIP4()
{
    int num1 = rand() % 255;
    int num2 = rand() % 255;
    int num3 = rand() % 255;
    int num4 = rand() % 255;
    result = std::to_string(num1) + "." + std::to_string(num2) + "." + std::to_string(num3) + "." + std::to_string(num4);
    std::cout << "  " + result << std::endl;
    return result;
}

void GenerateIP::mainMenu(std::string count)
{
    srand(time(0));
    int countConvert = stoi(count);
    for (int i = 0; i < countConvert; i++) {
        generateIP4();
    }
}
