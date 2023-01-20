# HackWebTool
![alt text](https://i.imgur.com/EVnE64N.png)
CloudFlare bypass, Breacher, FindPerson, GeneratorIP

Dependencies: **libcurl**
## Linux
- git clone https://github.com/Lomasterrrr/HackWebTool.git
- cd HackWebTool
- make

---------------------

## CloudFlare
Options:
- ./a.out -cfb **[file sub] [protocol] [domian]**

Example:
- ./a.out -cfb other/sub.txt https:// google.com

## Breacher
Options:
- ./a.out -br **[file sub] [protocol] [domian]**

Example:
- ./a.out -br other/path.txt https:// google.com

## GenerateIP4
Options:
- ./a.out -gi4 **[count]**

Example:
- ./a.out -gi4 10

## FindPerson
Options:
- ./a.out -fp **[name]**

Example:
- ./a.out -fp lomaster
