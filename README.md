# HackWebTool
![alt text](https://i.imgur.com/PTa4fTI.png)

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

    optional arguments:
      -h, --help 
```
## Examples
```
      CouldFlare bypass: ./HackTool -C -f pwd/sub.txt -P https -D google.com
          
      Breacher: ./HackTool -B -f pwd/path.txt -P https -D google.com
          
      FindPerson: ./HackTool -FP -n lomaster
          
      GeneratorIP4: ./HackTool -GI4 --count 10
```

## Linux
```
  $ git clone https://github.com/Lomasterrrr/HackWebTool.git
  $ cd HackWebTool-main
  $ make
```
