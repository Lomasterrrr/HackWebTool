#include <iostream>
#include "CloudflareBypass.h"
#include "Breacher.h"
#include "GenerateIP.h"
#include "DiscordGift.h"
#include "FindPerson.h"

int main(int argc, char *argv[]){
   CloudflareBypass cfb;
   Breacher b;
   GenerateIP gi;
   FindPerson fp;

   if (argc <= 1)
	{
		if (argv[0])
			std::cout << "\n  Сделано Lomaster | OLDTEAM\n  2023г\n\n";
		exit(1);
	}
   if (std::string(argv[1]) == "-cfb") {
      cfb.openFile(argv[2]);
      cfb.setSec(argv[3]);
      cfb.setDomian(argv[4]);
      cfb.mainMenu();
   }
   else if (std::string(argv[1]) == "-br"){
      b.openFile(argv[2]);
      b.setSec(argv[3]);
      b.setDomian(argv[4]);
      b.mainMenu();
   }
   else if (std::string(argv[1]) == "-gi4") {
      gi.mainMenu(argv[2]);
   }
   else if (std::string(argv[1]) == "-ds") {
      DiscordGift dg;
      dg.mainMenu();
   }
   else if (std::string(argv[1]) == "-fp") {
      fp.mainMenu(argv[2]);
   }
   else {
      std::cout << "  -help\n";
   }

}