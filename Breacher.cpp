#include "Breacher.h"
#include <iostream>
#include <fstream>
#include "CloudflareBypass.h"
#include "curl/curl.h"
#include "lib/termcolor.hpp"
#include "src/netCurl.h"

using namespace termcolor;

void Breacher::openFile(std::string path)
{
    std::ifstream myfile (path); // Открытие файла
    if (myfile.is_open()){
        while (!myfile.eof() ) 
        {
            getline (myfile,line); // Считывание строки
            array[loop] = line; // Запись её в массив
            loop++;
        }
    myfile.close(); 
    }
}

void Breacher::setDomian(std::string domian)
{
    this->domian = domian;
}

void Breacher::setSec(std::string Secure)
{
    this->Secure = Secure;
}

void Breacher::mainMenu()
{
    for (int a = 0; a < loop; a++) {
        switch (ResponseCode(Secure + domian + array[a])) {
             case 404:
                std::cout << bold << red << "  [-] " << reset  << Secure + domian + array[a] << bold << blue << " | " << red << "404 Not Found\n" << reset;
                break;
             case 403:
                std::cout << bold << red << "  [-] " << reset << Secure + domian + array[a] << bold << blue << " | " << red << "403 Forbidden\n" << reset;
                break;
             case 500:
                std::cout << bold << red << "  [-] " << reset << Secure + domian + array[a] << bold << blue << " | " << red << "500 Internet Server Error\n" << reset;
                break;
             case 502:
                std::cout << bold << red << "  [-] " << reset << Secure + domian + array[a] << bold << blue << " | " << red << "502 Bad Gateway\n" << reset;
                break;
             case 503:
                std::cout << bold << red << "  [-] " << reset << Secure + domian + array[a] << bold << blue << " | " << red << "503 Service Unavailable\n" << reset;
                break;
             case 504:
                std::cout << bold << red << "  [-] " << reset << Secure + domian + array[a] << bold << blue << " | " << red << "504 Gateway Timeout\n" << reset;
                break;
             case 301:
                std::cout << bold << yellow << "  [/] " << reset << Secure + domian + array[a] << bold << blue << " | " << yellow << "301 Moved Permanently\n" << reset;
                break;
             case 200:
                std::cout << bold << green << "  [+] " << reset << Secure + domian + array[a] << bold << blue << " | " << green << "200 OK\n" << reset;
                break;
             case 201:
                std::cout << bold << green << "  [+] " << reset << Secure + domian + array[a] << bold << blue << " | " << green << "201 Created\n" << reset;
                break;
             case 202:
                std::cout << bold << green << "  [+] " << reset << Secure + domian + array[a] << bold << blue << " | " << green << "202 Accepted\n" << reset;
                break;
             case 203:
                std::cout << bold << green << "  [+] " << reset << Secure + domian + array[a] << bold << blue << " | " << green << "203 Non-Authoritative Information\n" << reset;
                break;
             case 204:
                std::cout << bold << green << "  [+] " << reset << Secure + domian + array[a] << bold << blue << " | " << green << "204 No Content\n" << reset;
                break;
             case 206:
                std::cout << bold << green << "  [+] " << reset << Secure + domian + array[a] << bold << blue << " | " << green << "206 Partial Content\n" << reset;
                break;
             case 304:
                std::cout << bold << red << "  [-] " << reset << Secure + domian + array[a] << bold << blue << " | " << red << "304 Not Modified\n" << reset;
                break;
             case 302:
                std::cout << bold << green << "  [/] " << reset << Secure + domian + array[a] << bold << blue << " | " << green << "302 Found\n" << reset;
                break;
             case 205:
                std::cout << bold << green << "  [+] " << reset << Secure + domian + array[a] << bold << blue << " | " << green << "205 Reset Content\n" << reset;
                break;
             default:
                std::cout << bold << yellow << "  [/] " << reset << Secure + domian + array[a] << bold << blue << " | " << yellow << "Code Not Found\n" << reset;
                break;

         }
    }
}
