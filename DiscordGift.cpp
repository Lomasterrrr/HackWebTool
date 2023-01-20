#include "DiscordGift.h"
#include "lib/termcolor.hpp"
#include "src/netCurl.h"

using namespace termcolor;

char DiscordGift::RandomStr()
{
    return AlphaNumeric[rand() % MyLen];
}

std::string DiscordGift::Generate(int l)
{
    int m = 0;
    for (int m = 0; m < l; m++) {
        result = result + RandomStr();    
    }
    return result;
}

void DiscordGift::mainMenu()
{
    srand(time(0));
    while(true){
        std::string generate = Generate(16);
        std::string link = "https://discordapp.com/api/v6/entitlements/gift-codes/" + generate + "?with_application=false&with_subscription_plan=true";
        std::string prevLink = "https://discord.gift/" + generate;
         switch (ResponseCode(link)) {
            case 404:
                std::cout << bold << red << "  [-] " << reset  << prevLink << bold << blue << " | " << red << "404 Not Found\n" << reset;
                break;
            case 200:
                std::cout << bold << green << "  [+] " << reset << prevLink << bold << blue << " | " << green << "200 OK\n" << reset;
                break;
            case 429:
                std::cout << bold << blue << "  [-] " << reset  << prevLink << bold << blue << " | " << blue << "429 Too Many Requests\n" << reset;
                break;
            case 403:
                std::cout << bold << red << "  [-] " << reset << prevLink << bold << blue << " | " << red << "403 Forbidden\n" << reset;
                break;
             case 500:
                std::cout << bold << red << "  [-] " << reset << prevLink << bold << blue << " | " << red << "500 Internet Server Error\n" << reset;
                break;
             case 502:
                std::cout << bold << red << "  [-] " << reset << prevLink << bold << blue << " | " << red << "502 Bad Gateway\n" << reset;
                break;
             case 503:
                std::cout << bold << red << "  [-] " << reset << prevLink << bold << blue << " | " << red << "503 Service Unavailable\n" << reset;
                break;
             case 504:
                std::cout << bold << red << "  [-] " << reset << prevLink << bold << blue << " | " << red << "504 Gateway Timeout\n" << reset;
                break;
             case 301:
                std::cout << bold << yellow << "  [/] " << reset << prevLink << bold << blue << " | " << yellow << "301 Moved Permanently\n" << reset;
                break;
             case 201:
                std::cout << bold << green << "  [+] " << reset << prevLink << bold << blue << " | " << green << "201 Created\n" << reset;
                break;
             case 202:
                std::cout << bold << green << "  [+] " << reset << prevLink << bold << blue << " | " << green << "202 Accepted\n" << reset;
                break;
             case 203:
                std::cout << bold << green << "  [+] " << reset << prevLink << bold << blue << " | " << green << "203 Non-Authoritative Information\n" << reset;
                break;
             case 204:
                std::cout << bold << green << "  [+] " << reset << prevLink << bold << blue << " | " << green << "204 No Content\n" << reset;
                break;
             case 206:
                std::cout << bold << green << "  [+] " << reset << prevLink << bold << blue << " | " << green << "206 Partial Content\n" << reset;
                break;
             case 304:
                std::cout << bold << red << "  [-] " << reset << prevLink << bold << blue << " | " << red << "304 Not Modified\n" << reset;
                break;
             case 302:
                std::cout << bold << green << "  [/] " << reset << prevLink << bold << blue << " | " << green << "302 Found\n" << reset;
                break;
             case 205:
                std::cout << bold << green << "  [+] " << reset << prevLink << bold << blue << " | " << green << "205 Reset Content\n" << reset;
                break;
            default:
                std::cout << bold << yellow << "  [/] " << reset << prevLink << bold << blue << " | " << yellow << "Code Not Found\n" << reset;
                break;
    }}
}
