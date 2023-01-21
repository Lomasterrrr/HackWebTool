#include <stdio.h>
#include "curl/curl.h"
#include "modules/HttpPost.h"
#include <string.h>
void mainMenuHttpPost(char* domain, const char* MESSAGE) {
    CURL *curl;
    CURLcode res;
    curl = curl_easy_init();
    if(curl) {
        curl_easy_setopt(curl, CURLOPT_URL, domain);
        curl_easy_setopt(curl, CURLOPT_POSTFIELDS, MESSAGE);
        curl_easy_setopt(curl, CURLOPT_POSTFIELDSIZE, (long)strlen(MESSAGE));
        res = curl_easy_perform(curl);
        if(res != CURLE_OK)
        printf("  \033[1;91m[-]\033[0;39m %s\033[1;94m |\033[0;39m\033[1;91m Failed\n\033[0;39m",domain);
        else {
        printf("  \033[1;92m[+]\033[0;39m %s\033[1;94m |\033[0;39m\033[1;92m Success!\n",domain);
        }
        curl_easy_cleanup(curl);
    }
    
}