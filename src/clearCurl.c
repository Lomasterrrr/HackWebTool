#include "clearCurl.h"
#include <stdio.h>

size_t ClearWrite(void *buffer, size_t size, size_t nmemb, void *userp)
{
    return size * nmemb;
}