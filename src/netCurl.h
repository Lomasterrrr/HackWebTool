#pragma once
#include <iostream>

size_t ClearWrite(void *buffer, size_t size, size_t nmemb, void *userp);
long ResponseCode(std::string link);
std::string GetIP(std::string link);

