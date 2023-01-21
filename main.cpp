#include "lib/includes.h"
#include "modules/CloudflareBypass.h"
#include "modules/Breacher.h"
#include "modules/GenerateIP.h"
#include "modules/FindPerson.h"

void cfbMenu(){
   std::cout << "\n  HackWebTool - by lomaster | OldTeam\n\n";
   std::cout << "      CouldFlare bypass:\n";
   std::cout << "          Usage: ./HackTool [-C] [-f path_file] [-P protocol] [-D domain]\n";
   std::cout << "      Breacher:\n";
   std::cout << "          Usage: ./HackTool [-B] [-f path_file] [-P protocol] [-D domain]\n";
   std::cout << "      FindPerson:\n";
   std::cout << "          Usage: ./HackTool [-FP] [-n, --name]\n";
   std::cout << "      GeneratorIP4:\n";
   std::cout << "          Usage: ./HackTool [-GI4] [--count]\n\n";
   std::cout << "    optional arguments:\n";
   std::cout << "      -h, --help            show this help message\n\n";
}
int main(int argc, char *argv[]){
   CloudflareBypass cfb;
   Breacher b;
   GenerateIP gi;
   FindPerson fp;

   if (argc <= 1)
	{
		if (argv[0])
			cfbMenu();
		exit(1);
	}
   if (std::string(argv[1]) == "-h" || std::string(argv[1]) == "--help") {
      cfbMenu();
   }
   if (std::string(argv[1]) == "-C") {
      if (std::string(argv[2]) == "-f") {
         cfb.openFile(argv[3]);
      }
      if (std::string(argv[4]) == "-P") {
         cfb.setSec(argv[5]); 
      }
      if (std::string(argv[6]) == "-D") {
         cfb.setDomian(argv[7]);
         cfb.mainMenu();
      }
   }

   if (std::string(argv[1]) == "-B"){
      if (std::string(argv[2]) == "-f") {
         b.openFile(argv[3]);
      }
      if (std::string(argv[4]) == "-P") {
         b.setSec(argv[5]);
      }
      if (std::string(argv[6]) == "-D") {
         b.setDomian(argv[7]);
         b.mainMenu();
      }
   }

   if (std::string(argv[1]) == "-GI4") {
      if (std::string(argv[2]) == "--count") {
         gi.mainMenu(argv[3]);
      }
   }
   if (std::string(argv[1]) == "-FP") {
      if (std::string(argv[2]) ==  "-n" || std::string(argv[2]) ==  "--name") {
         fp.mainMenu(argv[3]);
      }
   }

}