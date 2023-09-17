#!/bin/bash
#this is a shortcut for pushing alx project to github
loober=$(cat counter.txt)
echo $loober
loober=$((loober+1));
message="t$loober"
git pull
chmod u+x *.c
git add .
git commit -m "$message"
git push
echo "$loober" > counter.txt

