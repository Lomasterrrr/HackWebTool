#pragma once
#include <iostream>

class CloudflareBypass
{
private:
    short loop=0; // Количество строк
    std::string domian; // Домен
    std::string array[500]; // Текст файла
    std::string line; // Считываемая строка
    std::string result; // Домен + сабдомен
    std::string IP; // Угадайте
    std::string Secure; // http или https и др
public:
    void openFile(std::string path);
    void setDomian(std::string domian);
    void setSec(std::string Secure);
    void mainMenu();
};
