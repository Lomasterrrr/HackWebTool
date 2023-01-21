#include <iostream>
#include "curl/curl.h"
#include "netCurl.h"

size_t ClearWrite(void *buffer, size_t size, size_t nmemb, void *userp)
{
    return size * nmemb;
}

long ResponseCode(std::string link)
{
    CURL *curl = curl_easy_init();
    if(curl) {
        CURLcode res;
        const char * linkConvert = link.c_str();
        curl_easy_setopt(curl, CURLOPT_URL, linkConvert);
        curl_easy_setopt(curl, CURLOPT_WRITEFUNCTION, ClearWrite);
        res = curl_easy_perform(curl);
        
        if(res == CURLE_OK) {
            long response_code;
            curl_easy_getinfo(curl, CURLINFO_RESPONSE_CODE, &response_code);
            return response_code;
        }
        curl_easy_cleanup(curl);
        return 0;
    }
    return 0;
}

std::string GetIP(std::string link){
    CURL *curl = curl_easy_init();
    if(curl) {
        CURLcode res;
        char *ip;
        const char * linkConvert = link.c_str();
        curl_easy_setopt(curl, CURLOPT_URL, linkConvert);
        curl_easy_setopt(curl, CURLOPT_WRITEFUNCTION, ClearWrite);
        res = curl_easy_perform(curl);
        if((res == CURLE_OK) &&
            !curl_easy_getinfo(curl, CURLINFO_PRIMARY_IP, &ip) && ip) {
            return ip;
        }
        else{
            return "N/A";
        }
        curl_easy_cleanup(curl);
    }
    return "0";
}

