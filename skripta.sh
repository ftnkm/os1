#!/bin/bash
mkdir -p fajlovi && cd fajlovi
touch abcdefg.bat
touch abcxyz.bat
for ((i=1; i < 8; i++)); do
  touch cdata$i.sav
done

for ((i=1; i < 11; i++)); do
  touch datei$i.sav
done

touch xyzabc.bat
