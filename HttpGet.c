#include "modules/HttpGet.h"
#include <stdio.h>
#include "curl/curl.h"
#include "src/clearCurl.h"

void mainMenuHttpGet(char* domain) {
    CURL *curl;
    CURLcode res;
    curl = curl_easy_init();
    if(curl) {
     curl_easy_setopt(curl, CURLOPT_URL, domain);
     curl_easy_setopt(curl, CURLOPT_WRITEFUNCTION, ClearWrite);
     curl_easy_setopt(curl, CURLOPT_FOLLOWLOCATION, 1L);
     res = curl_easy_perform(curl);
     if(res != CURLE_OK)
       printf("  \033[1;91m[-]\033[0;39m %s\033[1;94m |\033[0;39m\033[1;91m Failed\n\033[0;39m",domain);
     else {
      printf("  \033[1;92m[+]\033[0;39m %s\033[1;94m |\033[0;39m\033[1;92m Success!\n",domain);
     }
     curl_easy_cleanup(curl);
    }
    
}

