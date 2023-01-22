g++ -c main.cpp
gcc -lcurl -c src/clearCurl.c
g++ -c -lcurl src/netCurl.cpp
g++ -c -lcurl Breacher.cpp
g++ -c -lcurl CloudflareBypass.cpp
g++ -c -lcurl GenerateIP.cpp
g++ -c -lcurl FindPerson.cpp
gcc -lcurl -c HttpGet.c
gcc -lcurl -c HttpPost.c
g++ -lcurl -o HackTool main.o netCurl.o Breacher.o CloudflareBypass.o GenerateIP.o FindPerson.o HttpGet.o HttpPost.o clearCurl.o
rm main.o
rm netCurl.o
rm Breacher.o
rm CloudflareBypass.o
rm GenerateIP.o
rm FindPerson.o
rm HttpGet.o
rm clearCurl.o
rm HttpPost.o
clear
./HackTool