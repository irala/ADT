#!/bin/bash
#compile

g++ -g  -o adt -I .  main.cpp classic.cpp adt.cpp -Werror -Wall -std=c++17
echo compiled done!