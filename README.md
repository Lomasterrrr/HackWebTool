![alt text](https://i.imgur.com/jZC8bvF.png)

CloudFlare bypass, Breacher, FindPerson, GeneratorIP

Dependencies: **libcurl**

## Document
```
  HackWebTool - by lomaster | OldTeam

      CouldFlare bypass:
          Usage: ./HackTool [-C] [-f path_file] [-P protocol] [-D domain]
      Breacher:
          Usage: ./HackTool [-B] [-f path_file] [-P protocol] [-D domain]
      FindPerson:
          Usage: ./HackTool [-FP] [-n, --name]
      GeneratorIP4:
          Usage: ./HackTool [-GI4] [--count]
      HttpGet:
          Usage: ./HackTool [-HTTPg] [-D domain]
      HttpPost:
          Usage: ./HackTool [-HTTPp] [-D domain message]

    optional arguments:
      -h, --help            show this help message
```
## Examples
```
      CouldFlare bypass: ./HackTool -C -f pwd/sub.txt -P https -D google.com
          
      Breacher: ./HackTool -B -f pwd/path.txt -P https -D google.com
          
      FindPerson: ./HackTool -FP -n lomaster
          
      GeneratorIP4: ./HackTool -GI4 --count 10
      
      HttpGet: ./HackTool -HTTPg -D google.com
      
      HttpPost: ./HackTool -HTTPp -D google.com Hi_google
```

## Linux
```
  $ git clone https://github.com/Lomasterrrr/HackWebTool.git
  $ cd HackWebTool-main
  $ make
```
