#pragma once
#include <iostream>

static const char AlphaNumeric[] = "0123456789"
    "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
    "abcdefghijklmnopqrstuvwxyz";

class DiscordGift
{
private:
    int MyLen = sizeof(AlphaNumeric) - 1;
    std::string result;
public:
    char RandomStr();
    std::string Generate(int l);
    void mainMenu();
};
