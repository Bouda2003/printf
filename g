#!/bin/bash
#this is a shortcut for pushing alx project to github
loober=$((loober+1))
echo $loober
git pull
chmod u+x *.c
git add .
git commit -m "$loober"
git push
