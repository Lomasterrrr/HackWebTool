all:
	g++ -c main.cpp
	g++ -c -lcurl src/netCurl.cpp
	g++ -c -lcurl Breacher.cpp
	g++ -c -lcurl CloudflareBypass.cpp
	g++ -c -lcurl GenerateIP.cpp
	g++ -c -lcurl DiscordGift.cpp
	g++ -c -lcurl FindPerson.cpp
	g++ -lcurl -o build/HackTool main.o netCurl.o Breacher.o CloudflareBypass.o GenerateIP.o DiscordGift.o FindPerson.o
	g++ -lcurl -o HackTool main.o netCurl.o Breacher.o CloudflareBypass.o GenerateIP.o DiscordGift.o FindPerson.o
	rm main.o
	rm netCurl.o
	rm Breacher.o
	rm CloudflareBypass.o
	rm GenerateIP.o
	rm DiscordGift.o
	rm FindPerson.o
	clear