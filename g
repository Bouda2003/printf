#!/bin/bash
#this is a shortcut for pushing alx project to github
loober=$(cat counter.txt)
loober=$((loober+1));
message="commit "
message+="$loober"
git pull
chmod u+x *.c
git add .
git commit -m "$message"
git push
echo "$loober" > counter.txt

