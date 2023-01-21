#pragma once
#include <iostream>
class FindPerson
{
private:
    std::string services[5] = {"https://www.youtube.com/@", // Array services
    "https://vk.com/", "https://github.com/", "https://www.tumblr.com/", "https://ok.ru/"};
public:
    void mainMenu(std::string name);
};
